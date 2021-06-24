/***************************************************************
 * Description: This is to understand the "Thread " in c++.
 *           A thread is also known as lightweight process. Idea is achieve parallelism by dividing a process
 *                  into multiple threads
 *          A thread is also known as lightweight process.
 *          The browser has multiple tabs that can be different threads.
 *
 *
 *  Ways to create threads in c++:
 *          -- Function Pointer
 *          -- Lamdba functions
 *          -- Functions
 *          -- Member Functions
 *          -- Static Member functions
 *
 *
 * Author :Nikhil Gowda Shivaswamy,
 * 					-Master of Engineering in Information Technology
 *
 *********************************************************/

 //Find the addition of all odd number from 1 to 190000000000 and all even numbers from 1 to 19000000000

 #include<iostream>
 #include<thread>
 #include <chrono>
 #include<memory>
 using namespace std;
 using namespace std::chrono;
 typedef unsigned long long ull;

 ull OddSum = 0;
 ull EvenSum = 0;

 void findEven(ull start, ull endd)
 {
     for (ull i=start; i<=endd; ++i)
     {
         if((i&1)==0)
         {
             EvenSum += i;
         }
     }
 }

 void findOdd(ull start, ull endd)
 {
     for (ull i=start; i<=endd; ++i)
     {
         if((i&1)==1)
         {
             OddSum += i;
         }
     }
 }

 int main()
 {
     ull start=0, endd=1900000000;
     auto startTime = high_resolution_clock::now();
     std::thread t1(findEven,start, endd);  //comment and check the real time
     std::thread t2(findOdd, start, endd);  //comment and check the real time

     t1.join(); //comment and check the real time
     t2.join(); //comment and check the real time

     //Uncomment and check these below line after commenting above line
     //findOdd(start, endd);
     //findEven(start, endd);
     auto stopTime = high_resolution_clock::now();
     auto duration = duration_cast<microseconds>(stopTime - startTime);

     cout<<"OddSum: "<<OddSum<<endl;
     cout<<"EvenSum: "<<EvenSum<<endl;
     cout<<"Sec: "<<duration.count()/1000000<<endl;
     return 0;
     return 0;

 }
