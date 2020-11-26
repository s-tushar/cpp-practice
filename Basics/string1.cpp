#include<iostream>
#include<string.h>

using namespace std;

// C style strings 

int main(){
    char str[] = "gfg";
    char str2[] = "trs";
    cout<<sizeof(str)<<endl;
    cout<<strlen(str2)<<endl;
    strcpy(str, str2);

    cout<<strcmp(str, str2)<<endl;

    cout<<"String1: "<<str<<endl;
    cout<<"String2: "<<str2<<endl;


    return 0;
}