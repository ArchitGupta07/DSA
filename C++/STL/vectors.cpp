#include<iostream>
#include<math.h>
#include<string.h>
#include <vector> // Include the vector header

using namespace std;


int main(){

    vector<int> v;

    v.push_back(1);
    v.emplace_back(2);  // its faster than the push_back


    vector<pair<int,int>> vec;

    vec.push_back({1,2});  // pushing pair into vector uing curly braces

    vec.emplace_back(1,2); // here we don't need to use curly braces to push a pair

    vector<int> v1(5,100);  // this means {100,100,100,100,100}

    vector<int> v2(5);  // this means {0,0,0,0,0} there could be any garbage value instead of zero


    vector<int> v3(5,20);

    vector<int> v4(v3);  //another container and will copy v3

    





    cout<<"Archit";

    return 0;

}