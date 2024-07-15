#include <bits/stdc++.h>
using namespace std;
int main()
{
    // binary search;
    // vector<int> arr = {1, 2, 3, 4, 5, 6};
    // int start;
    // int mid;
    // int end;
    // int key;
    // cin >> key;
    // start = 0;
    // end = 5; 
    // cout<<arr[3]<<endl;
    // while (start <= end)
    // {
    //     mid = (start + end) / 2;
    //     if (arr[mid] == key)
    //     {
    //         cout << "element found in index " <<mid<< endl;
    //         break;
    //     }
    //     else if (arr[mid] > key)
    //     {
    //         end = mid - 1;
    //     }
    //     else if (arr[mid]<key)
    //     {
    //         start = mid + 1;
    //     }
    //     else
    //     {
    //         cout<<"doesn't exists"<<endl;
            
    //     }
        
        
        
    // }


    int brr[19] = {3,9,1,0,2,3,6,3,5,10,3,4,3,123,67,3,9,03,53};
    sort(brr, brr+19);
    int key = 3;
    int i = 0;
    int count = 0;
    while (brr[i]<=(key+1))
    {
        if (brr[i]==key)
        {
            count++;
        }
        i++;
    }
    cout<<count<<endl;
    




    return 0;
}