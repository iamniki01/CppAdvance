/***************************************************************
 * Description: This is to understand the "STL " in c++.
 *           -- Standard Template Library
 *
 *      Topic: std::multimap --Stores key value pair
 *          std::multimap<Type1, Type2> mapVar;
 *  Key points:
 *          in this there will same key with different values
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
     std::multimap<string, int> myMap;
     myMap.insert(std::make_pair("Nikhil" ,10696));
     myMap.insert(std::make_pair("Punya", 18062020));
     myMap.insert(std::make_pair("Punya", 210797));
     for(const auto &e:myMap)
     {
         cout<<e.first<<" "<<e.second<<endl;
     }

     cout<<" "<<endl;

     //get all the pairs of given key
     auto range = myMap.equal_range("Punya");
     for (auto it=range.first; it!=range.second;++it)
     {
         cout<<it->first<<" "<<it->second<<endl;
     }
     return 0;
 }
