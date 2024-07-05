#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = { 2,3,4,5,6,7,8,10};
    // if (binary_search(arr,arr+8,11))
    // {
    //     cout<<"element present"<<endl;
    // }
    // else
    // {
    //     cout<<"Element not present "<<endl;
    // }

    // swap alternate

    for (int i = 0; i < 8; i = i +2)
    {
            swap(arr[i], arr[i+1]);
    }
    for (int i = 0; i < 8; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    
    return 0;
}