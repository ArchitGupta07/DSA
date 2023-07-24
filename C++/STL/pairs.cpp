#include<iostream>
#include<math.h>
#include<string.h>

using namespace std;

//pair can be both a data structure and data type


int main(){

    pair<int,int> p1 = {1,3};  //pair as data structure

    pair<int,pair<int,int>> p2 = {1,{3,4}};

    cout<<p2.first<<" "<<p2.second.second<<" "<<p2.second.first<<endl;



    pair<int,int> arr[] = {{1,2},{2,3},{3,4}} ; //pair as data type 

    cout<<arr[1].second<<endl;







    cout<<"Archit";

    return 0;

}