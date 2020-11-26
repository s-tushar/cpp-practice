#include<iostream>
#include<stack>

using namespace std;

bool match(char a, char b ){
    return( (a=='('  && b==')'  ) || (a=='['  && b==']'  ) || (a=='{'  && b=='}'  ));
}

int main(){

    stack<char> st;
    cout<<endl;
 
    string s = "{{(({}))}(}";

    for(int i=0; i<s.length(); i++){
        if(s[i] == '{' || s[i] == '[' || s[i] == '('){
        st.push(s[i]);
        } else{
            if(match(st.top(),s[i])){
                st.pop();
            } else{
                cout<<"False bcoz : "<<st.top()<< "   "<< s[i] << "at "<< i<<endl;
                break;
            }
        }
    }

    if(st.size()>0){
        cout<<"False"<<endl;
    } else{
        cout<<"True"<<endl;
    }

    cout<<endl<<endl;

    return 0;


}