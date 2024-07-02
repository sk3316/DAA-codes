#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, j; 
    // int N = 65;
    cout<<"enter the number "<<endl;
    cin>>n;
    int N = 65;
    for (int i = 0; i < n; i++)
    {
    // int count = i;
        for (int j = 0; j < n ; j++)
        {
            // cout<<count+1<<" ";
            // count++;
            // j++;
            // cout<<"* ";
            cout<<char(N)<<" ";
            // j++;
            N++;
        }
        N = N + i;
        cout<<endl;
        // i++;
    }
}