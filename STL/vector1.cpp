#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;

int main(){
    vector<int> vint = {1};
    vint.push_back(7);
    vint.push_back(1);
    vint.push_back(3);
    vint.push_back(6);
    vint.push_back(5);
    cout<<"Size of the Vector Int is : "<<vint.size()<<endl;
    cout<<"Value at 7 is : "<<vint[7]<<endl;

    cout<<"Not using Reference"<<endl;
    for(int x: vint){
        cout<<"  |"<<x;
        x=x+2;
        cout<<"  "<<x;
        }
        cout<<endl;
    for(int y: vint) cout<<"  "<<y;
    cout<<endl;


    cout<<"Now using Reference"<<endl;
    for(int &x: vint){
        cout<<"  |"<<x;
        x=x+2;
        cout<<"  "<<x;
        }
        cout<<endl;

    for(int y: vint) cout<<"  "<<y;
    cout<<endl;


    vector <int> vint2(5,10);
    cout<<"Vector with another syntax"<<endl;
    for(auto i = vint2.begin(); i!= vint2.end(); i++) cout<<"  "<<*i;
    cout<<endl; 

    int arr[] = {4,5,6,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr, arr+n);
    cout<<"Vector from an Array"<<endl;
    for(auto i = v.rbegin(); i!= v.rend(); i++) cout<<"  "<<*i;
    cout<<endl; 



    return 0;
}