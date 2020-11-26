// Josephus Problem

#include<iostream>
#include<list>
#include<algorithm>

using namespace std;

int main(){

    int n=7;
    int k=3;

    list<int> l;
    for(int i=0; i<n; i++){
        l.push_back(i);
    }

    cout<<endl;

    auto it = l.begin();

    while(l.size()>1){
        for(int i=0; i<k; i++){
            it++;
            if(it==l.end()){
                it=l.begin();
            }
        }
        it=l.erase(it);
        if(it==l.end()){
            it=l.begin();
        }
    }
    cout<<"The lst Man standing is: "<<*it<<endl;
    return 0;
}