#include<bits/stdc++.h>
using namespace std;

// int main()
// {
//     string name;
//     cout<<"Enter your name: "<<endl;
//     cin>>name;
//     cout<<"Your name is: "<<name<<endl;
//     cout<<"Length: "<<name.length()<<endl;
//     reverse(name.begin(),name.end());
//     cout<<"Reversed name: "<<name<<endl;
//     // name.shrink_to_fit
//     return 0;
// }
#include <bits/stdc++.h>

char to_lowercase(char ch)
{
    if ('A' <= ch && ch <= 'Z')
    {
        return ch - 'A' + 'a';
    }
    else
    {
        return ch;
    }
}

bool check_pos(char s)
{
    if ((s >= 'a' and s <= 'z') or (s >= '0' and s <= '9'))
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool checkPalindrome(string s)
{
    // Write your code here.
    int i = 0, e = s.size() - 1;
    while (i < e)
    {
        if (check_pos(to_lowercase(s[i])) && check_pos(to_lowercase(s[e])))
        {
            if (to_lowercase(s[i]) != to_lowercase(s[e]))
            {
                return false;
            }
            else
            {
                i++;
                e--;
            }
        }
        else if (!check_pos(to_lowercase(s[i])))
        {
            i++;
        }
        else
        {
            e--;
        }
    }
    return true;
}

void reverseSentence(string s){
    stack<string> st;
    for (int i = 0; i < s.length(); i++)
    {
        string word = "";   
        while (s[i] != ' ' && i < s.length())
        {
            word+=s[i];
            i++;
        }
        st.push(word);        
    }
    while (!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
}

void splitString(string s)
{
    istringstream ss(s);
    string word;
    while (ss >> word)
    {
        cout<<word<<endl;
    }
    
}

int main()
{
    // string name;
    // cout<<"Enter your name: "<<endl;
    // cin>>name;
    // cout<<"Your name is: "<<name<<endl;
    // cout<<"Length: "<<name.length()<<endl;
    // reverse(name.begin(),name.end());
    // cout<<"Reversed name: "<<name<<endl;
    // name.shrink_to_fit
    
    
    // string s = "hey, how are you doing?";
    // reverseSentence(s);
    // string str = splitString(s);
    // reverse(str.begin(), str.end());
    // cout<<str;
    
    int *c;
    cout<<sizeof(c);
    return 0;
}