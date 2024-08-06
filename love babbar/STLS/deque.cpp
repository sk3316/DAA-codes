#include<bits/stdc++.h>
using namespace std;
int main()
{
    deque<int> d;
    d.push_back(1);
    d.push_back(2);
    d.push_back(3);
    d.push_front(0);
    for (int i : d)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"First Element: "<<d.front()<<endl;
    cout<<"Last Element: "<<d.back()<<endl;    

    d.pop_back();
    d.pop_front();
    for (int i : d)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    d.erase(d.begin(),d.end());
    d.push_back(5);
    d.push_front(4);
    for (int i : d)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}