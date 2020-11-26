#include<iostream>
#include<string>

using namespace std;

int main() {

    string str = "geeksforgeeks";
    string str2;
    cout<<"Enter String1"<<endl;
    getline(cin, str2);

    getline(cin, str2, 'a'); //stop when we see 'a'


    str2.push_back('s');
    str.pop_back();
    cout<<"String1 : "<<str<<endl<<"String2 : "<<str2<<endl;
    cout<<"The Capacity for String1 is : "<<str.capacity()<<endl;
    str.resize(222);
    cout<<"The Capacity for String1 is : "<<str.capacity()<<endl;
    cout<<"The Length of String1 is : "<<str.length()<<endl;
    str.shrink_to_fit();
    cout<<"The Capacity for String1 is : "<<str.capacity()<<endl;
    str = str+"theextension";
    cout<<" String1: "<<str<<endl;
    cout<<" String1: "<<str.substr(1,3)<<endl;
    cout<<" String1: "<<str<<endl;
    cout<<"The find : " <<str.find("eek")<<endl;

    // we can use > == with strings

    

    return 0;
}