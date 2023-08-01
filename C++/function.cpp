#include<iostream>

using namespace std;

void name(string name){
    cout<<name;
}

void byValue(string s){ // it doesn't changes the original s in the main and only copies the value of s

    s += 'a';
    cout<< "By value Function gives " <<s<<endl;

}
void byReference(string &s){ // it changes the original s in the main

    s += 'a';
    cout<< "By reference Function gives "<<s<<endl;

}

//array by default pass by reference

int main(){

    string s = "Archit";

    byValue(s);

    cout<<s<<" By value";

    byReference(s);

    
    cout<<s<<" By reference";


    



    return 0;
}