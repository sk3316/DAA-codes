#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 8;
    int arr[n] = {-2, -3, 4, -1, -2, 1, 5, -3}; /*, 5 ,7, -1, 56, 32, -100, 100, 1, -10, 19*/
    long long sum = 0, maxi = LONG_MIN;
    vector<int> v;
    int start = 0, end = 0;
    for (int i = 0; i < 8; i++)
    {
        if (sum == 0)
        {
            start = i;
            v.push_back(arr[i]);
        }
        sum += arr[i];
        if (sum > maxi)
        {
            maxi = sum;
            end = i;
        }
        if (sum < 0)
        {
            sum = 0;
            v.clear();
        }
    }

    for (int i = start; i <= end; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
    cout << maxi;
    cout<<endl;
    // cout<<v.size();
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    
}