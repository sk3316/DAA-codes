#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    string ptr = str;  
    reverse(ptr.begin(),ptr.end());
    if (ptr == str)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    return 0;
}