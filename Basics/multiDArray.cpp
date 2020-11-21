#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>

using namespace std;

int main() {
    // let's try on arrays
    // stored in memory in rowmajor order
    int arr[3][2] = {
                        {10, 20},
                        {30, 40},
                        {50, 60} 
                    };

    for(int i = 0; i<3; i++){
        for(int j=0; j<2; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}