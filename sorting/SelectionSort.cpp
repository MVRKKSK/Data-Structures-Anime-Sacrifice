#include <iostream>
using namespace std;

void SelectionSort(int arr[] , int n){
    for (int i = 0; i <= n-2; i++)
    {
        int smallest = i;
        for (int j = i+1; j <= n-1; j++)
        {
            if(arr[j]<arr[smallest]){
                smallest = j;
            }
        }

        swap(arr[i] , arr[smallest]);
        
    }
    
}


int main(){
    int n;
    cin>>n;

    int arr[n];

    for (int  i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    SelectionSort(arr , n);

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    return 0;
    
}