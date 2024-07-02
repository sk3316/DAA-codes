// no. of occurrences of n in an array

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, key, arr[10];
    int count = 0;
    cout << "Enter the number of elements in array: " << endl;
    cin >> n;
    cout << "Enter array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the key whose number of occurrences we have to find: " << endl;
    cin>>key;
    for (int j = 0; j < n; j++)
    {
        if (arr[j] == key)
        {
            count++;
        }
        else
        {
            continue;
        }
    }

    if (count > 0)
    {
        cout << "The number of occurrences of key in array is: " << count << endl;
    }
    else
    {
        cout << "There is no such key in the array! " << endl;
    }

    return 0;
}