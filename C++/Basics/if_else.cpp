#include<iostream>

using namespace std;

int main(){

    cout<<"Archit"<<endl;

    int age;
    cin>>age;
    if(age>=18){
        cout<<"You are an adult"<<endl;
    }else if(age=16){
        cout<<"Small"<<endl;
    }

    switch(age){
        case 18:
            cout<<"Adult";
        case 12:
            cout<<"12";
            break;
        default:
            cout<<"default";
}

    return 0;

}



