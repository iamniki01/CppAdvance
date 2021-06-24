/***************************************************************
 * Description: This is to understand the "Smart Pointer " in c++.
 *           -- Smart Pointer is a class which wraps a raw pointer , to manage life time of the pointer
 *           -- The most fundamental job of smart pointer is to remove the chances pf memory leak.
 *  Key points:
 *
 *      Three type of Smart Pointer
 *          1. Unique Pointer
 *          2. Shared pointer
 *          3. Weak pointer
 * Author :Nikhil Gowda Shivaswamy,
 * 					-Master of Engineering in Information Technology
 *
 *********************************************************/

 ///////Smart Pointer////////////


 #include<iostream>
 using namespace std;


 class MyInt
 {
 public:
    explicit MyInt(int *p = nullptr)
    {
        data = p ;
    }
    ~MyInt()
    {
        delete data;
    }
    int& operator * ()
    {
        return *data;
    }
 private:
    int* data;
 };

int main()
 {
     int* p = new int(10);
     MyInt myint = MyInt(p);  //no need to call delete p since it hold delete in destructor
     cout<< *myint <<endl;
     return 0;
 }
