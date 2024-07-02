// no. of occurrences of characters in a string

#include<bits/stdc++.h>
using namespace std;
int main(){

    string str;
    char ch;
    cout<<"Enter the String"<<endl;
    cin>>str;
    cout<<"Enter the character to find"<<endl;
    cin>>ch;
    int count = 0;

    for (int  i = 0; i < str.length(); i++)
    {
        if (str[i]==ch)
        {
            count++;
        }
        else
        {
            continue;
        }        
    }
    if (count>0)
    {
        cout<<"number of occurrences of "<<ch<<" in "<<str<<" is "<<count<<endl;
    }
    else
    {
        cout<<"There are no "<<ch<<" in "<<str<<endl;
    }
    

    return 0;
}