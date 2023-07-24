#include<iostream>
#include<vector>

using namespace std;


template<class T>
void display(vector<T> &v){
    cout<<"displaying";
    for(int i=0; i<v.size();i++){
        cout<<v[i]<<" ";

    }
    cout<<endl;
}
int main(){
    vector<int> v(6,3); //6 element vector of 3s
    vector<int> vec1;
    vector<char> vec2(4);  // 4 element character vector
    vector<char> vec3(vec2);  // 4 element character vector from vect2


    int element, size=5;

    display(v);

    for(int i=0;i<4;i++){
        cout<<"Enter an element to add to this vector";
        cin>>element;
        vec1.push_back(element);
    }
    for(int i=0;i<size;i++){
        cout<<"Enter an element to add to this vector";
        cin>>element;
        vec2.push_back(element);
    }

    display(vec1);
    vec1.pop_back();
    display(vec1);
    cout<<"Enter an element to add to this vector";

    vector<int> :: iterator iter = vec1.begin();
    vec1.insert(vec1.begin(),566);  //
    vec1.insert(iter+1,566);
    vec1.insert(iter+1,500,566);
    display(vec1);
    
    // return 0;

}
