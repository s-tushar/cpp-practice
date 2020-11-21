#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric> // for accumulate

using namespace std;

// remember to use long long int in case you get overfloe errors. if only positive integers, use unsigned.

int main(){
    vector<int> v = {1,3,4,6,7,8,9,6,45,44};

    int sum = 0;

    for(auto i: v){
        sum += i;
    }

    cout<<"The Sum of all elements is : "<< sum<<endl;

    //OR

    int sum2 = 0;
    sum2 = accumulate(v.begin(), v.end(), sum2);
    cout<<"The sum with another method is : "<<sum2<<endl;

    return 0;
}