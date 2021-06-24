/***************************************************************
 * Description: This is to understand the "Smart Pointer " in c++.
 *           -- Smart Pointer is a class which wraps a raw pointer , to manage life time of the pointer
 *           -- The most fundamental job of smart pointer is to remove the chances pf memory leak.
 *  Key points:
 *          1. weak Pointer
 *          --  It has no ownership, prevent memory leak, deallocates the raw_pointer when ptr goes out of scope.
 *          -- used to remove cyclic dependency between shared pointer
 *          -- It actually reference to an object which is managed by shared pointer
 *          -- it can be created as a copy of shared pointer
 *  Operations:
 *      -- release, reset,swap, get, get_deleter
 *
 * Author :Nikhil Gowda Shivaswamy,
 * 					-Master of Engineering in Information Technology
 *
 *********************************************************/

 #include<iostream>
 #include<memory>
 using namespace std;

 int main()
 {
     auto sharedptr = std::make_shared<int> (100);
     std::weak_ptr<int> weakPtr(sharedptr);

     cout<<"WeakPtr.use_count(): "<<weakPtr.use_count()<<endl;
     cout<<"sharedPtr.use_count(): "<<sharedptr.use_count() <<endl;
     cout<<"WeakPtr.expired: "<<weakPtr.expired()<<endl;

     if(std::shared_ptr<int> sharedptr1 = weakPtr.lock())
     {
         cout<<"*sharedPtr: "<<*sharedptr <<endl;
         cout<<"sharedPtr1.use_count(): "<<sharedptr1.use_count() <<endl;
     }
     else
     {
        cout<<"1.  NO RESOURCES!!!"<<endl;
     }
     weakPtr.reset();
     if (std::shared_ptr<int> sharedptr1 = weakPtr.lock())
     {
         cout<<"*sharedPtr: "<<*sharedptr <<endl;
         cout<<"sharedPtr1.use_count(): "<<sharedptr1.use_count() <<endl;
     }
     else
     {
        cout<<"2.   NO RESOURCES!!!"<<endl;
     }
     return 0;

 }
