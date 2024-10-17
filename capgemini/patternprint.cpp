#include<bits/stdc++.h>
using namespace std;
int main(){
    int row = 5;
    int k = 1;
    for (int i = 1; i <= row; i++)
    {
        if (i%2!=0)
        {
            int k = i;
            for (int j = 0; j < row-1; j++)
            {
                cout<<k<<" ";
            }
            cout<<k+1<<endl;
        }
        else
        {
            int k = i;
            cout<<k+1<<" ";
            for (int j = 1; j < row; j++)
            {
                cout<<k<<" ";
            }
            cout<<endl;
        }
    }
    
    return 0;
}