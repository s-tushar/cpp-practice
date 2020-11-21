// vectors

#include<iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    for(auto x: v)   // we can write int in place of auto. auto is like whatever
        cout<<x<<" ";
    cout<<endl;


    int n = 10;
    vector<int> v2(n,5);  // vector of size 10 where every element is 5
    for(auto y: v2)
        cout<<y<<" ";
    cout<<endl;


    vector<int> v3 = {10,0,20,44};
    for(auto d: v3){
        cout<<d<<" ";
    }
    cout<<endl;


    vector<int> v4 = {10,0,20,44};
    for(auto dd: v4){
        cout<<dd<<" ";
    }
    cout<<endl;


    return 0;
}