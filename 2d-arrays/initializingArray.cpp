#include <iostream>
using namespace std;

void printArray(int a[][5], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int arr[][5] = {{2, 1}, {5, 8}};
    printArray(arr, 5, 5);
}