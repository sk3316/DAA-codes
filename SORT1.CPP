#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j,arr[10],n;
    cin>>n;
    for ( i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for ( i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
        return 0;
}