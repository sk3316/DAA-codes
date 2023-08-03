#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int i,n,j,arr[10];
    cout<<"no. of elemenys";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i] <<" ";
    }
    return 0;
}