#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <bits/stdc++.h>

using namespace std;

int maxDifference(vector<int> &arr)
{
    // Sort the array
    sort(arr.begin(), arr.end());

    int n = arr.size();
    int sum1 = 0, sum2 = 0;
    unordered_map<int, int> freq;

    for (int i = 0; i < n; ++i)
    {
        freq[arr[i]]++;
    }

    vector<int> subset1, subset2;
    for (int i = n - 1; i >= 0; --i)
    {
        if (freq[arr[i]] == 2)
        {
            if (find(subset1.begin(), subset1.end(), arr[i]) == subset1.end())
            {
                subset1.push_back(arr[i]);
                subset2.push_back(arr[i]);
            }
        }
        else
        {
            if (sum1 <= sum2)
            {
                subset1.push_back(arr[i]);
                sum1 += arr[i];
            }
            else
            {
                subset2.push_back(arr[i]);
                sum2 += arr[i];
            }
        }
    }

    sum1 = accumulate(subset1.begin(), subset1.end(), 0);
    sum2 = accumulate(subset2.begin(), subset2.end(), 0);

    return abs(sum1 - sum2);
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int result = maxDifference(arr);
    cout << "Maximum Difference = " << result << endl;

    return 0;
}
