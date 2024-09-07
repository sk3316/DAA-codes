#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    int n;
    n = abs(q);
    vector<int> v;
    int ans;
    int val;
    // int sum = 0;
    while (n>0)
    {
        ans = n%10;
        v.push_back(ans);
        n = n/10;
    }
    cout<<v.size()<<endl;
    // reverse(v.begin(), v.end());
    int sum = 0;
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;
    int z = v.size()-1;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
        val = v[z-i]*pow(10,i);
        sum+=val;
    }
    cout<<endl;
    // cout<<sum;
    if(q<0)
    {
        cout<<-1*sum<<endl;
    }
    else
    {
        cout<<sum<<endl;
    }
    
    return 0;
}