#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{   
    // int i,n,j,arr[10];
    // cout<<"no. of elemenys";
    // cin>>n;
    // for (int i = 0; i < n; i++)
    // {
    //     cin>>arr[i];
    // }
    // sort(arr,arr+n);
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<arr[i] <<" ";
    // }

    int arr[10],n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sort(begin(arr),end(arr));
    // cout<<arr[10];

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}