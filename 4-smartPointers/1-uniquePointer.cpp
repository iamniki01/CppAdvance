/***************************************************************
 * Description: This is to understand the "Smart Pointer " in c++.
 *           -- Smart Pointer is a class which wraps a raw pointer , to manage life time of the pointer
 *           -- The most fundamental job of smart pointer is to remove the chances pf memory leak.
 *  Key points:
 *          1. Unique Pointer
 *          --  It is a class template, prevent memory leak, deallocates the raw_pointer when ptr goes out of scope.
 *
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


 class UniquePtr
 {
 public:
    explicit UniquePtr(int x): x{x}
    {
    }
    ~UniquePtr()
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

int main()
 {
    /* UniquePtr* P = new UniquePtr(10);
     //UniquePtr  ;
     P->getx();  //HERE MEMORY LEAK IS HAPPENING */
     std::unique_ptr<UniquePtr> p1(new UniquePtr(10));
     std::unique_ptr<UniquePtr> p2 = make_unique<UniquePtr>(20);  //preferred syntax --which handles exception

     cout<< p1->getx() <<endl;
     cout<< p2->getx() << (*p2).getx() <<endl; //either way we can dereference

     //p1= p2  //FAIL: IT IS NOT POSSIBLE
     std::unique_ptr<UniquePtr> p3 = std::move(p1); //Passing ownership is allowed

     UniquePtr * p =  p3.get();
     UniquePtr* p4 = p3.release();

     p2.reset(p4);

     cout<<p2->getx();

     return 0;
 }

