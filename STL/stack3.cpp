#include<iostream>
#include<stack>
using namespace std;
int main(){
int hold = 1;
stack<int> s1;
stack<int> s2;

int arr[] = {15,13, 12, 14, 16, 8, 6, 4, 10, 30};

cout<<"The length of array is : "<<sizeof(arr)/sizeof(arr[0])<<endl;

int size = sizeof(arr)/sizeof(arr[0]);

for(int i=0; i<size; i++){
    cout<<"  "<<arr[i];
}
cout<<endl;

for(int i=0; i<size; i++){
    int hold = 1;
    if(s1.size() == 0){
        s1.push(arr[i]);
        cout<<"  "<<hold;
        continue;
    }
    if(s1.top()>arr[i]){
        s1.push(arr[i]);
        cout<<"   "<<hold;
        continue;
    } else
    {
        while(s1.size()!=0 && s1.top()<arr[i]){
            hold++;
            s2.push(s1.top());
            s1.pop();
        }
        cout<<"   "<<hold;
        while(s2.size()!=0){
            s1.push(s2.top());
            s2.pop();
        }
        s1.push(arr[i]);

    }
}
cout<<endl;
return 0;
}