#include<bits/stdc++.h>
using namespace std;

// Parameterized way
void f(int i, int sum){
    if(i < 1){
        cout<<sum<<endl;
        return;
    }  
    f(i-1, sum+i);
}


// Functional way

int ff(int n){
    if (n == 1) 
    {
        return 1;
    }
    return n * ff(n-1);
    
}


int main(){

    int n;
    cin>>n;
    // f(n, 0);
    cout<< ff(n);
    return 0;
}