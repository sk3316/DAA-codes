#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "#h#e#l#l#o#j#a#v#a#s#c#r#i#p#t#";
    cout<<s.length();
    cout<<endl;
    string str1 = "";
    string str2 = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != '#')
        {
            str1.push_back(s[i]);
        }  
        else
        {
            str2.push_back(s[i]);
        }
    }
    // reverse(str1.begin(), str1.end());
    string str3 = str2 + str1;
    cout<<str3;
    
    // cout<<"hello world";
    return 0;
}