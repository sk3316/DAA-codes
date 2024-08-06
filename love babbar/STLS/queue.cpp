#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<string> q;
    q.push("shit");
    q.push("anshu");
    q.push("priya");
    q.push("darshi");
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    return 0;
}