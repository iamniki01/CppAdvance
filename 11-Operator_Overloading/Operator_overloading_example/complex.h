/*
 * complex.h
 *
 *  Created on: 22/02/2023
 *      Author: Nikhil Gowda S
 */

#ifndef COMPLEX_H_
#define COMPLEX_H_

#include <iostream>
using namespace std;

namespace overloadingExample
{

    class Complex
    {
    private:
        double real;
        double imaginary;

    public:
        Complex();
        Complex(double real, double imaginary);
        Complex(const Complex &other);
        const Complex &operator=(const Complex &other);

        double getReal() const
        {
            return real;
        }
        double getImaginary() const
        {
            return imaginary;
        }
    };

    ostream &operator<<(ostream &out, const Complex &c);
    Complex operator+(const Complex &c1, const Complex &c2);
    Complex operator+(const Complex &c1, double d);
    Complex operator+(double d, const Complex &c1);

} /* namespace overloadingExample */

#endif /* COMPLEX_H_ */