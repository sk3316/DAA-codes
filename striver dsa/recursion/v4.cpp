#include<bits/stdc++.h>
using namespace std;

void f(int l,  int r){
    if (l>=r)
    {
        return;
    }
    swap(arr[l], arr[r]);
    f(l+1, r-1);
}

int main(){

    int arr[] = {2,5,6,1,2,3,8,5};
    f(0, 7);
    for (int i = 0; i < 8; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    return 0;
}