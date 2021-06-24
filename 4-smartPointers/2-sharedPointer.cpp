/***************************************************************
 * Description: This is to understand the "Smart Pointer " in c++.
 *           -- Smart Pointer is a class which wraps a raw pointer , to manage life time of the pointer
 *           -- The most fundamental job of smart pointer is to remove the chances pf memory leak.
 *  Key points:
 *          1. Shared Pointer
 *          --  It can share ownership of object, prevent memory leak, deallocates the raw_pointer when ptr goes out of scope.
 *
 *      SHARED PONTER is thread safe when it is in control block(reference count)
 *      Shared pointer is not thread wehn it is in managed block(object)
 *
 *  Three ways of shared pointer to destroy managed objects:
 *      -- if the last shared go out of the scope
 *      -- if we initialize shared pointer with some other shared pointer
 *      -- if we reset it.
 *
 * Author :Nikhil Gowda Shivaswamy,
 * 					-Master of Engineering in Information Technology
 *
 *********************************************************/

 #include<iostream>
 #include<memory>
 #include<thread>
 using namespace std;


 class SharedPtr
 {
 public:
    explicit SharedPtr(int x): x{x}
    {
    }
    ~SharedPtr()
    {
        cout<< "Destrctuted.." <<endl;
    }
    int getx()
    {
        return x;
    }
 private:
    int x;
 };

 void fun(std::shared_ptr<SharedPtr> sp)
 {
     cout<<"Fun: "<<sp.use_count()<<endl;
 }

int main()
 {
     std::shared_ptr<SharedPtr> sp(new SharedPtr(10));
     cout<<sp->getx()<<endl;
     cout<<sp.use_count()<<endl;
     std::shared_ptr<SharedPtr> sp1 = sp;  //only use copy by value, it neither work with pointer or reference.
     cout<<sp.use_count()<<endl;
     cout<<sp1.use_count()<<endl;

     //Using Threads
     cout<<"\n Using Threads "<<endl;
     std::shared_ptr<SharedPtr> SP(new SharedPtr(100));
     thread t1(fun, SP), t2(fun,SP), t3(fun,SP);
     cout<<"main: "<<SP.use_count()<<endl;
     t1.join();
     t2.join();
     t3.join();

     return 0;
 }
