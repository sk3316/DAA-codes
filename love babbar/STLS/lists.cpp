#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l;
    l.push_back(1);
    l.push_front(0);
    for (int i : l) 
    {
        cout<<i<<" ";
    }
    cout<<endl;
    l.erase(l.begin());
    cout<<"After Erase: "<<endl;
    for (int i :l)
    {
        cout<<i<<" ";
    }
    
    return 0;
}