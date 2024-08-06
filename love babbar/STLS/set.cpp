#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;
    s.insert(6);
    s.insert(6);
    s.insert(6);
    s.insert(6);
    s.insert(1);
    s.insert(4);
    s.insert(4);
    s.insert(4);
    s.insert(4);
    s.insert(5);
    s.insert(2);
    s.insert(2);
    s.insert(2);
    s.insert(2);
    for (auto i : s)
    {
        cout<<i<<" ";
    }
    
    cout<<endl;

    set<int> :: iterator it = s.begin();
    it++;

    s.erase(s.find(5));
    for (auto i : s)
    {
        cout<<i<<" ";
    }


    return 0;
}