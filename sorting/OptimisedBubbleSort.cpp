#include<bits/stdc++.h>
using namespace std;

void BubbleSort(int arr[] , int n){
    for (int i = 0; i < n-1; i++)
    {
        int flag = 0;
        for (int j = 0; j < n-1; j++)
        {
            if(arr[j]>arr[j+1]){
                swap(arr[j] , arr[j+1]);
                flag = flag+1;
            }
        }

        if(flag==0){
            break;
        }
        
    }
    
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    BubbleSort(arr , n);
    
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}