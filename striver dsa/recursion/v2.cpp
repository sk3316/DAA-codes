#include<bits/stdc++.h>
using namespace std;

void f(int i, int n){
    if(i > n){
        return ;
    }
    cout<<"Shitanshu"<<endl;
    f(i+1, n);
}

void nr(int i, int n){
    if(i<1){
        return;
    }
    cout<<i<<endl;
    nr(i-1, n);
}

void nbr(int i, int n){
    if(i < 1){
        return ;
    }
    nbr(i-1,n);
    cout<<i<<endl;
}


int main(){
    // Print Name N times using recursion
    
    int n;
    cin>>n;
    // f(1,n);

    // Print number backwards from N to 1

    // nr(n, n);

    // Print number backwards from N to 1 using backtracking

    nbr(n, n);
    
    return 0;
}