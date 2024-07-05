#include<bits/stdc++.h>
using namespace std;
int main()
{
    int maxi, mini;
    int size;
    cout<<"Enter the size of array : "<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter the array : "<<endl;
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    maxi = *max_element(arr,arr+size);
    mini = *min_element(arr,arr+size);
    cout<<"Sum of MAX and MIN from the given array is : "<<maxi + mini <<endl;
    
    return 0;
}