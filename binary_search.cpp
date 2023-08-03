// elements should be in monotonic increasing or decresing order 
#include<iostream>
using namespace std;
int main()
{
    int start,end,mid,key,arr[10],size,i;
    start = 0;
    // end = arr.size()-1; 
    end = size-1;
    mid = start + ((end-start)/2);
    cout<<"enter the size of array: "<<endl;
    cin>>size;
    cout<<"enter the array: "<<endl;
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the key: "<<endl;
    cin>>key;
    while (start<end)
    {
        if (key == arr[mid])
        {
            cout<<"position is "<<arr[i]<<endl;
        }
        else if (arr[mid]<key)
        {
            start = mid+1;
        }
        else if (arr[mid]>key)
        {
            end = mid-1;
        }
        else
        {
            cout<<"key is not present"<<end;
        }
    }
    return 0;
}