#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    cout<<s.top()<<endl;

    stack<string> ss;
    ss.push("shit");
    ss.push("anshu");
    ss.push("priya");
    ss.push("darshi");
    cout<<ss.top()<<endl;

    ss.pop();
    cout<<ss.top()<<endl;

    
    return 0;
}