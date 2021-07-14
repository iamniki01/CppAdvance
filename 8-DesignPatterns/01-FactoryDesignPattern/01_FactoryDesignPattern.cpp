/*******************************************
*Description: Design Ptteren: This is a general repeatable solution to a commonly ocuuring problem in software design.
*   Types:
*       1.Creational DP - > 6 types
*       2. Behavioral DP -> 12 types
*       3.Structural DP -> 6 Types
* Factroy design Pattern:
*           -It creates object for us, rather we initiating object directly
*           -also known as virtual constructor.  
*   How to create it?
*       Define an interface or an abstract class for creating an object 
*           -but let the subclass decide which class to initiate.
*
*   Author:
*       NikhiL Gowda Shivaswamy
*           Master of Engineering in Information Technology
******************************************************/

#include <iostream>
#include <string>

class Cup
{
    public:
        Cup()
          : color("")
        {}

        std::string color;

        /* This is the factory method. */
        static Cup* getCup(std::string color);
};

class RedCup : public Cup
{
    public:
        RedCup()
        {
            color = "red";
        }
};

class BlueCup : public Cup
{
    public:
        BlueCup()
        {
            color = "blue";
        }
};

Cup* Cup::getCup(std::string color)
{
    if (color == "red")
        return new RedCup();
    else if (color == "blue")
        return new BlueCup();
    else
        return 0;
}


/* A little testing */
int main()
{
    /* Now we decide the type of the cup at
     * runtime by the factory method argument */
    Cup* redCup  = Cup::getCup("red");
    std::cout << redCup->color << std::endl;

    Cup* blueCup = Cup::getCup("blue");
    std::cout << blueCup->color << std::endl;
}