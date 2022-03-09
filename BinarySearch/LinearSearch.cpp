#include <bits/stdc++.h>
using namespace std;

int LinearSearch(int arr[] , int n , int k){
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == k){
            return i;
        }
    }
    return -1;
    
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int k;
    cin>>k;
    int pos = LinearSearch(arr , n , k);
    if(pos == -1){
        cout<<"element not found"<<endl;
    }
    else{cout<<"element is found at "<<pos+1<<endl;}
    
} 