#include<bits/stdc++.h>
using namespace std;
int trailingZeroes(long long n){
    long long prod = 1;
    for(int i = 1; i <= n; i++)
    {
        prod = prod*i;
    }
    
    int count = 0;
    int res;
    while (prod>0)
    {
        res = prod%10;
        if (res==0)
        {
            count++;    
        }
        if(res!=0)
        {
            break;
        }
        prod = prod/10;
        
    }
    return count;
    // return prod;

}
int main(){
    long long n = 19;
    cout<<trailingZeroes(n)<<endl;
    return 0;
}