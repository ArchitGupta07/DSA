#include<iostream>

using namespace std;

int main(){


    int arr[5];

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        cout<<"Enter"<<endl;
        cin>>arr[i];

    }

    cout<<arr[3];



    return 0;
}