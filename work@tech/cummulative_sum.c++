#include<iostream>
using namespace std;
int main()
{
    int size, arr[10], brr[10], i, j, sum = 0;
    cin>>size;
    for ( i = 0; i < size; i++)
    {
        cin>>arr[size];
    }
    for ( j = 0; j < size; j++)
    {
        brr[i] = arr[j]+arr[j+1];
    }
    

    
    return 0;
}