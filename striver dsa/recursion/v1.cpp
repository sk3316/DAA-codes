#include<bits/stdc++.h>
using namespace std;
void print(){
    cout<<"We are incrementing..."<<endl;
    int i = 1;
    cout<<i<<endl;
    i++;
    print();
}
int main(){
    cout<<"Showing basic recursion program:"<<endl;
    print();
}