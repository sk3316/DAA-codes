#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    v.push_back(9);
    v.push_back(2);
    v.push_back(1);
    v.push_back(5);
    v.push_back(7);
    v.push_back(8);
    v.push_back(4);
    // v.sort(v.begin(),v.end());
    sort(v.begin(),v.end());
    cout<<binary_search(v.begin(),v.end(),5)<<endl;

    
    return 0;
}