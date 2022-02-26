/* An array is an collection of data which is sotred in a contiguous memory allocation. */

#include <iostream>
using namespace std;
int main()
{

    /* Sum of all the elements of an array */
    int n;
    cin>>n;
    int arr[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        sum = sum+arr[i];
    }
    cout<<sum<<endl;
}
