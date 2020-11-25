#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    vector<int> rollNo = { 101, 108, 103, 105};
    vector<int> marks = { 70, 80, 40, 90};

    cout<<"Size of Vector is : "<< rollNo.size()<<endl;

    int size = rollNo.size();

    vector<pair<int, int>> students;
    int index = 0;
    for(int x: rollNo){
        students.push_back({marks[index], x});
        index++;
    }

    sort(students.begin(), students.end());

    for(auto n: students){
        cout<<n.first<< "   "<<n.second<<endl;
    }

    cout<<"The reverse order printing is "<<endl;

    for(int y=0; y<size; y++){
        cout<<students[3-y].second<<"   "<<students[3-y].first<<endl;
    }





    return 0;
}