#include<bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> arr1;
    arr1.push_back(1);
    arr1.push_back(2);
    arr1.push_back(3);
    arr1.push_back(4);
    arr1.push_back(5);
    arr1.push_back(6);
    arr1.push_back(7);

    int n = arr1.size();


    vector<int> arr2;
    arr2.push_back(3);
    arr2.push_back(1);
    arr2.push_back(5);
    arr2.push_back(8);
    arr2.push_back(3);
    arr2.push_back(5);
    arr2.push_back(1);
    
    arr2.back();

    


    int m = arr2.size();

    vector<int> varr;

    for (int i = 0; i < m; i++)
    {
        varr.push_back(arr2.back());
        arr2.pop_back();
    }

    for (int i = 0; i < n; i++)
    {
        varr.push_back(arr1.back());
        arr1.pop_back();
    }

  

    // for (int i = 0; i < n; i++)
    // {
    //     varr.push_back(arr1.back());
    //     arr1.pop_back();
    // }

    
    // for (int i = 0; i < arr1.size(); i++)
    // {
    //     cout<<i<<" ";
    // }

    reverse(varr.begin(), varr.end());

    // for (int i : varr)
    // {
    //     cout<<i<<" ";
    // }
    

    sort(varr.begin(),varr.end());
    for (int i : varr)
    {
        cout<<i<<" ";
    }

    

    // vector<int>v;
    // v.push_back(9);
    // v.push_back(2);
    // v.push_back(1);
    // v.push_back(5);
    // v.push_back(7);
    // v.push_back(8);
    // v.push_back(4);
    // // v.sort(v.begin(),v.end());
    // // sort(v.begin(),v.end());
    // // cout<<binary_search(v.begin(),v.end(),5)<<endl;

    // reverse(v.begin()+3,v.end());

    // for (int i : v)
    // {
    //     cout<<i<<" ";
    // }
    

    
    return 0;
}