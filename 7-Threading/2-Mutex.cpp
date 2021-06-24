/***************************************************************
 * Description: This is to understand the "Thread " in c++.
 *           A thread is also known as lightweight process. Idea is achieve parallelism by dividing a process
 *                  into multiple threads
 *          A thread is also known as lightweight process.
 *          The browser has multiple tabs that can be different threads.
 *      Topic: Mutex in C++ -
 *
 *  Race Condition;  It is a situation where two or more threads/process happened to change a common data at the same time.
 *  Critical Section: If there is a race condition then we have to protect it and the protected section is called critical section.
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
 using namespace std;

 int myAmount = 0;
 int counter = 0;
 std::mutex m;
 std::mutex mtx;

 void addMoney()
 {
     m.lock();
     ++myAmount;
     m.unlock();
 }

 void increaseTheOunetrfor100()
 {
     for (int i=0; i<100; i++)
     {
         if(mtx.try_lock())
         {
             ++counter;
             mtx.unlock();
         }
     }
 }

 int main()
 {
     std::thread t1(addMoney);
     std::thread t2(addMoney);

     t1.join();
     t2.join();

     cout<< myAmount <<endl<<endl;

     std::thread t3(increaseTheOunetrfor100);
     std::thread t4(increaseTheOunetrfor100);

     t3.join();
     t4.join();

     cout<<  counter <<endl<<endl;


     return 0;
 }
