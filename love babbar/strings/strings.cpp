#include<bits/stdc++.h>
using namespace std;

int main()
{
    string name;
    cout<<"Enter your name: "<<endl;
    cin>>name;
    cout<<"Your name is: "<<name<<endl;
    cout<<"Length: "<<name.length()<<endl;
    reverse(name.begin(),name.end());
    cout<<"Reversed name: "<<name<<endl;
    return 0;
}