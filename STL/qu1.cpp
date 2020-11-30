#include <iostream>
#include <queue>
using namespace std;

void printNeeded(int n, int arr[], int arraySize)
{

    int size = arraySize;

    queue<int> q;
    queue<int> temp1;
    queue<int> temp2;

    int currSize = size;

    for(int in=0; in<arraySize; in++){
        q.push(arr[in]);
    }
    

    while (n > 0)
    {
        while (currSize > 0)
        {
            cout << q.front() << "   ";
            temp1.push(q.front());
            q.pop();
            currSize--;
        }
        int size = size * arraySize;
        currSize = size;
        while (currSize > 0)
        {
            for (int r = 0; r < arraySize; r++)
            {
                while (!temp1.empty())
                {
                    q.push(10 * arr[r] + temp1.front());
                    temp2.push(temp1.front());
                    temp1.pop();
                }
                temp1 = temp2;
            }
            currSize--;
        }
        n--;
    }

    cout << endl;
}
int main()
{
    int n = 10;
    int arr[] = {5, 6};
    int arraySize = sizeof(arr) / sizeof(arr[0]);

    printNeeded(n, arr, arraySize);

    return 0;
}