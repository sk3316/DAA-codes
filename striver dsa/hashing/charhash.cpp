#include<bits/stdc++.h>
using namespace std;

void frequencyS(string s)
{
    map<char, int> hash;
    for(auto c : s)
    {
        hash[c]++;
    }
    for (auto c : s)
    {
        cout<<c<<"->"<<hash[c]<<endl;
    }
    
}

int main()
{
    // string s;
    // cin>>s;

    // int hash[300] = {0};
    // for (int  i = 0; i < s.size(); i++)
    // {
    //     hash[s[i]]++;
    // }

    // int q;
    // cin>>q;
    // while(q--){
    //     char c;
    //     cin>>c;
    //     cout<<hash[c]<<endl;
    // }
    string s = "hello kittyooo";
    frequencyS(s);
    return 0;
}