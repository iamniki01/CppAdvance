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

 //Function Pointer:   This is the very basic form of thread creation.

 #include<iostream>
 #include<thread>
 using namespace std;

 //Uncomment and check it
 //   1. Function pointer
 /*void fun(int x)
 {
     while(x --> 0)
     {
         cout<<x<<endl;
     }
 }

 int main()
 {
     std::thread t1(fun, 10);
     // std::thread t2(fun, 11);
     t1.join();
     //t2.join();
     return 0;
 }*/








 // 2. Lmabda Function

 // Uncomment it and check
 /*int  main()
 {
     std::thread t([](int x)
     {
         while (x--> 0)
         {
             cout<< x <<endl;
         }
     }, 10);
     t.join();
     return 0 ;
 } */

















 // 3. Function Object (Functor)

  // Uncomment it and check

 /*class Base
 {
 public:
    void operator () (int x)
    {
        while(x --> 0)
        {
            cout << x <<endl;
        }
    }
 };

 int main()
 {
     std::thread t((Base()), 10);
     t.join();
     return 0;
 }*/









 //4. NonStatic  member function

 /*class Base
 {
 public:
    void run(int x)
    {
        while(x --> 0)
        {
            cout << x <<endl;
        }
    }
 };

 int main()
 {
     Base b;
     std::thread t(&Base::run, &b, 10);
     t.join();
     return 0;
 }*/














 // 5 . Static Void

 class Base
 {
 public:
    static void run(int x)
    {
        while(x --> 0)
        {
            cout << x <<endl;
        }
    }
 };

 int main()
 {
     std::thread t(&Base::run, 10);
     t.join();
     return 0;
 }
