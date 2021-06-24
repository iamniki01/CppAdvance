/***************************************************************
 * Description: This is to understand the "Thread " in c++.
 *           A thread is also known as lightweight process. Idea is achieve parallelism by dividing a process
 *                  into multiple threads
 *          A thread is also known as lightweight process.
 *          The browser has multiple tabs that can be different threads.
 *      Topic: Producer-Consumer problem in C++ -
 *
 *  Have single buffer and both producer and consumer try to accessand get it respectively
 *  It can be achieved by Mutex (acquire lock and release) also with conditional variable.
 *
 *  MUTEX:
 *      It is used to avoid race condition.
 *      We use lock(), unlock(), try_lock() on mutex to avoid race condition.
 *
 *
 * Author :Nikhil Gowda Shivaswamy,
 * 					-Master of Engineering in Information Technology
 *
 *********************************************************/

 #include<iostream>
 #include<thread>
 #include<mutex>
 #include<deque>
 #include<condition_variable>
 using namespace std;

 std::mutex mu;
 std::condition_variable cond;
 deque<int> buffer;
 const unsigned int maxBufferSize = 50;

 void Producer(int val)
 {
    while(val)
    {
        std::unique_lock<std::mutex> locker(mu);
        cond.wait(locker, []()
                  {
                      return buffer.size() < maxBufferSize;
                  });
        buffer.push_back(val);
        cout<< "Produced "<<val <<endl;
        val --;
        locker.unlock();
        cond.notify_one();  //if more consumers then use notify_all
    }
 }

 void Consumer()
 {
    while(true)
    {
        std::unique_lock<std::mutex> locker(mu);
        cond.wait(locker, []()
                  {
                      return buffer.size() > 0;
                  });
        int val = buffer.back();
        buffer.pop_back();
        cout<< "Consumed "<<val <<endl;
        locker.unlock();
        cond.notify_one();
    }
 }


 int main()
 {
     std::thread t1(Producer, 10);
     std::thread t2(Consumer);

     t1.join();
     t2.join();
     return 0;
 }



