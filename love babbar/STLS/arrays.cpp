#include<bits/stdc++.h>
using namespace std;
int main()
{
    array<int, 4> a = {1,4,5,2};

    int size = a.size();
    for (int i = 0; i < size; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"Element at 2nd index is: "<<a.at(2)<<endl;
    cout<<"Array is empty or not: "<<a.empty()<<endl;

    cout<<"Element at first position: "<<a.front()<<endl;
    cout<<"Element at last position: "<<a.back()<<endl;
    

    return 0;
}