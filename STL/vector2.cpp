#include<iostream>
#include<vector>

using namespace std;

int main() {

    
    int arr[] = {8,10,20, 40, 3, 7};
    int n = 10;
    int size = sizeof(arr)/sizeof(arr[0]);
    vector<int> v1(arr, arr+size);
    for(int x: v1){
        if(x<10){
            cout<<"   "<<x;
        }
    }
    cout<<endl;
    return 0;
}