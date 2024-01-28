#include<bits/stdc++.h>
using namespace std;

void print3largest(int arr[],int arr_size)
{
    int first, second, third;
    if (arr_size=0)
    {
        cout<<"Invalid Format"<<endl;
        return; 
    }
    
    third=second=first= INT_MIN;
    for (int i = 0; i < arr_size; i++)
    {
        if (arr[i]>first)
        {
            third = second;
            second = first;
            first = arr[i]; 
        }
        
        else if (arr[i] > second && arr[i]!=first )
        {
            third = second;
            second = arr[i];
        }

        else if (arr[i] > third && arr[i] != second && arr[i] != first)
        {
            third = arr[i];
        }
    
    }
        
        cout<<"The largest elements are: "<<first<< " "<<second<<" "<<third<<endl;
    
}


int main()
{
    int arr[] = {12,13,1,10,34,11,34};
    int n = sizeof(arr)/sizeof(arr[0]);
    print3largest(arr,n);

    return 0;
}