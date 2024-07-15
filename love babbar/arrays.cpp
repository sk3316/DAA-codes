#include<bits/stdc++.h>
using namespace std;

void max_min_elmnt(int arr[],int size)
{
    sort(arr,arr+size);
    cout<<"Maximum element : "<<arr[size-1]<<endl<<"Minimum element : "<<arr[0]<<endl;
}

int main(){
// {   int size;
//     cout<<"Enter the size of array : "<<endl;
//     cin>>size;
//     int arr[size];
//     cout<<"Enter the array here : "<<endl;
//     for (int i = 0; i < size; i++)
//     {
//         cin>>arr[i];
//     }
//     // max_min_elmnt(arr, size);

//     int m;
//     cout<<"Enter the index from where the array has to be reversed : "<<endl;
//     cin>>m;
//     reverse(arr+m,arr+size);
//     for (int i = 0; i < size; i++)
//     {
//         cout<<arr[i]<<" ";
//     }

        int arr[10] = {1,2,1,2,3,2,2,1,4,4};
        for (int  i = 0; i < 10; i++)
        {
            if (arr[i] > arr[i+1])
            {
                swap(arr[i],arr[i+1]);
            }
            else
            {
                continue;
            }       
        }
        for (int i = 0; i < 10; i++)
        {
            cout<<arr[i]<<" ";
        }
        


    return 0;
    
}