#include<bits/stdc++.h>
using namespace std;
int main()
{
    // int num = 3;
    // cout<<endl;
    // switch (num)
    // {
    // case 1:
    //     cout<<"first"<<endl;
    //     break;

    // case 2:
    //     cout<<"second"<<endl;
    //     break;
    
    // default:
    //     cout<<"it is default case"<<endl;
    //     break;
    // }

    int num1, num2;
    cout<<"Enter the value of num1 "<<endl;
    cin>>num1;
    cout<<"Enter the value of num2 "<<endl;
    cin>>num2;
    char op;
    cout<<"Enter the operation you want to perform"<<endl;
    cin>>op;
    switch (op)
    {
    case '+':
        cout<<num1 + num2<<endl;
        break;
    case '-':
        cout<<num1 - num2<<endl;
        break;
    case '*':
        cout<<num1 * num2<<endl;
        break;
    case '%':
        cout<<num1 % num2<<endl;
        break;
    case '/':
        cout<<num1 / num2<<endl;
        break;
    
    default:
        cout<<"You have given an invalid operation"<<endl;
        break;
    }
    return 0;
}