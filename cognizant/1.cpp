#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    int n;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        v.push_back(i);
    }
    int sum = accumulate(v.begin(), v.end(), 0);
    cout<<sum<<endl;
    
    return 0;
}