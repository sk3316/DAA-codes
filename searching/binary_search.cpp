// elements should be in monotonic increasing or decresing order 
#include<iostream>
using namespace std;
int main()
{
    int start,end,mid,key,arr[10],size,i;
    start = 0;
    // end = arr.size()-1; 
    cout<<"enter the size of array: "<<endl;
    cin>>size;
    end = size-1;
    cout<<"enter the array: "<<endl;
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the key: "<<endl;
    cin>>key;
    while (start<=end)
    {
    mid = start + ((end-start)/2);
        if (key == arr[mid])
        {
            cout<<"position is "<<arr[i]<<endl;
            break;
        }
        else if (arr[mid]<key)
        {
            start = mid+1;
        }
        else 
        {
            end = mid-1;
        }
        
        
        
    }
            cout<<"key is not present"<<end;


    // int low,high,mid,arr[10],element,n;
    // cout<<"enter no. of elements"<<endl;
    // cin>>n;
    // cout<<"enter elements"<<endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cin>>arr[i];
    // }
    // cout<<"enter element to be searched";
    // cin>>element;
    // low=0;
    // high = n-1;
    // // mid = (low+(high))/2;
    // while(low<=high)
    // {
    // mid = (low+(high))/2;
    //     if(arr[mid]==element)
    //     {
    //         cout<<"element found"<<endl;
    //         break;
    //     }
    //     else if (arr[mid]<element)
    //     {
    //         low=mid+1;
    //     }
    //     else
    //     {
    //         high = mid-1;
    //     }
        
        
    // }
    // cout<<"hello"<<endl;
    
    return 0;
}


// int binarysearch(int arr[], int n, int k) {
//         // code here
//          int start = 0;
//     int end = n - 1;

//     while (start <= end)
//     {
//         int mid = (start + end) / 2;
 
//         if (arr[mid] == k)
//             return mid;
 
//         else if (arr[mid] < k)
//             start = mid + 1;
 
//         else
//             end = mid - 1;
//     }
//      return -1 ;
// }