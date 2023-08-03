// insertion sort
#include<iostream>
using namespace std;
int main()
{
    int n,arr[10],temp,j;
    cout<<"enter the size of array: "<<endl;
    cin>>n;
    cout<<"enter the elements: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<"enter your array's "<<i+1<<"th element: "<<endl;
        cin>>arr[i];
    }
    for (int i = 1; i < n; i++)
    {
        temp = arr[i];
        j=i-1;   
        while ( j >= 0 && arr[j]>temp)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
    cout<<"sorted elements are: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}