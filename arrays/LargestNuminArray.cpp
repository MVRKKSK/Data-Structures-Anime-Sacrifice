#include<iostream>
using namespace std;


int main(){
    int n;
    cin>>n;
    int arr[n];
    int largest = INT_MIN;
    int smallest = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        if(largest<arr[i]){
            largest = arr[i];
        }
        if(smallest>arr[i]){
            smallest=arr[i];
        }
    }

    cout<<"The largest element in the array is : "<<largest<<endl;
    cout<<"The Smallest element in the array is : "<<smallest<<endl;
    
}