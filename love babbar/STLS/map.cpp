#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int, string> m;
    m[1] = "shit";
    m[2] = "anshu";
    m[3] = "priya";
    m[4] = "darshi";

    m.insert({6, "joshi"});

    for (auto i : m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    
    return 0;
}