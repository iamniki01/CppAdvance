/***************************************************************
 * Description: This is to understand the "STL " in c++.
 *           -- Standard Template Library
 *
 *      Topic: Container inside container
 *  Key points:
 *          Lets implement in vector inside vector - which avoids usage of linked list(and tree)
 *
 *
 *
 * Author :Nikhil Gowda Shivaswamy,
 * 					-Master of Engineering in Information Technology
 *
 *********************************************************/
 #include<iostream>
 #include <vector>
 using namespace std;

 int main()
 {
     std::vector<std::vector<int>> Tree;
     int edge, n1, n2;
     cin>>edge;
     Tree.resize(edge);

     for (int i = 0; i<edge;i++)
     {
         cin>>n1>>n2;
         Tree[n1].push_back(n2);
     }

     for(const auto &e:Tree)
     {
         for(const auto &e1:e)
         {

            cout<<e1;
        }
        cout<<endl;
     }
     return 0;
 }

