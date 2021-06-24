/***************************************************************
 * Description: This is to understand the "STL " in c++.
 *           -- Standard Template Library
 *
 *      Topic: std::map --Stores key value pair
 *          std::map<Type1, Type2> mapVar;
 *  Key points:
 *          Key should be unique and allows only one key
 *          It can be store in sorted order
 *          NOTE:  It can be used in Dictionary type of Problem
 *
 *
 *
 * Author :Nikhil Gowda Shivaswamy,
 * 					-Master of Engineering in Information Technology
 *
 *********************************************************/

 #include<iostream>
 #include <map>
 #include <vector>
 #include <functional>
 using namespace std;

 int main()
 {
     std::map<string, int> myMap;
     myMap["Nikhil"] = 10696;
     myMap["Rahul"] = 181099;
     myMap.insert(std::make_pair("Punya", 210797));
     for(const auto &e:myMap)
     {
         cout<<e.first<<" "<<e.second<<endl;
     }
     return 0;
 }
