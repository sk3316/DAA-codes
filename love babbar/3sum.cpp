#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_cases;
    int size;
    int key;
    cout<<"Enter the number of test cases : "<<endl;
    cin>>test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        cout<<"Enter the size of array : "<<endl;
        cin>>size;
        int arr[size];
        cout<<"Enter the array here : "<<endl;
        for (int j = 0; j < size; j++)
        {
            cin>>arr[j];
        }
        // sort(arr, arr+size);
        cout<<"Enter the key : "<<endl;
        cin>>key;
        for (int k = 0; k < size- 2; k++)
        {
            for (int l = k+1; l < size - 1; l++)
            {
                for (int m = l+1; m < size; m++)
                {   
                    int sum = arr[k] + arr[l] + arr[m];
                    
                    if (sum == key)
                    {
                        cout<<arr[k]<<" "<<arr[l]<<" "<<arr[m]<<endl;
                    }
                }
                
            }
            
        }
        
    }
        cout<<"hey"<<endl;

    

    return 0;
}