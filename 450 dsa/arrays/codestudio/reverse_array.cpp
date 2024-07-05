#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cout << "Enter the size of array : " << endl;
    cin >> size;
    int arr[size];
    cout << "Enter the array here : " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int m;
    cout << "Enter the index from where the array has to be reversed : " << endl;
    cin >> m;
    reverse(arr + m, arr + size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}