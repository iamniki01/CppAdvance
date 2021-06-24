/***************************************************************
 * Description: This is to understand the "Polymorphism " in c++.
 *    --  Object-oriented Programming[OOPs]: rather than creating separate variables and functions,
 *                      we can also wrap these related data and functions in a single place (by creating objects).
 *                      This programming paradigm is known as object-oriented programming.
 *           -- Polymorphism is one of the key features of Object-oriented programming in C++.
 *                      It means many forms
 *  Key points:
 *      There are two types of Polymorphism
 *          1. Compile Time Polymorphisms / static binding/ Early binding
 *              a. Function Overloading
 *              b. Operator Overloading
 *          2. RunTime Polymorphisms / Dynamic Binding /  Lazy Binding --> iyt can be achieved only by pointer / reference.
 *               a. Function overriding(Using virtual function)
 *
 *
 * Author :Nikhil Gowda Shivaswamy,
 * 					-Master of Engineering in Information Technology
 *
 *********************************************************/
 ////operator overloading
  #include<iostream>
 using namespace std;
 class Complex
 {
 private:
    int real;
    int img;
 public:
    Complex (int r=0, int i=0): real{r},img{i}{}
    Complex operator + (Complex const &obj)
    {
        Complex res;
        res.real = real + obj.real;
        res.img = img + obj.img;
        return res;
    }
     void show()
    {
        cout<<real << " + i " << img <<endl;
    }
 };

 int main()
 {
    Complex c1(10, 20), c2(10,30);
    Complex c3 = c2 + c1;
    c3.show();
    return 0;
 }
