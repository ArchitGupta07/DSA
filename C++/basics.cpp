#include<bits/stdc++.h> // to include all libraries

#include<iostream>




using namespace std;

int main(){
    std::cout<<"Hey string"<<"\n";
    std::cout<<"Hey string"<<std::endl;
    std::cout<<"Hey string"<<std::endl<<"Hey Archit"<<endl;

    //taking inputs


    int x,y;
    cin>>x>>y;
    cout<<x<<y;

    //data type

    long c = 15;
    
    long long a = 150000000000;

    //float, double

    float b = 5.6;
    float d = 5;
    //string and getline

    // string s;
    cout<<"give the string ";
    // cin>>s;
    // cout<<"Your name is  "<<s;

    //But to get all of the line together  //Not compiling??????????????????????????????????????????????????
    string str;


    cin.ignore(); // important // Ignore the newline character left in the buffer from previous input


    getline(cin, str);
    cout<<str<<endl;


    //char

    char ch;
    cin>>ch;
    cout<<ch<<endl;
















    return 0;


}