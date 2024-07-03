#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number you want to check the divisibility for ?"<<endl;
    cin>>num;
    if (num%3 == 0 || num%5 == 0 || num%10 == 0 )
    {
        cout<<"Inputted number is divisible by 3, 5 or 10."<<endl;
    }
    else
    {
        cout<<"Inputted number is not divisible by 3,5 or 10"<<endl;
    }
    
    
    return 0;
}