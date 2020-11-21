#include<iostream>
#include<vector>
#include <algorithm> 

using namespace std;

int main() {
    vector<int> v {2,3,5,57,1,8,4};

    int max = v[0];
    for(auto i: v){
        max = max>i ? max : i;
    }
    cout<<"The max element is : "<<max<<endl;

    // OR

    int res = *max_element(v.begin(), v.end());

    cout<<"The max element by another method is : "<<res<<endl;


    return 0;
}