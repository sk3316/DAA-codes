// To check if the given number is prime or not
#include<iostream>
using namespace std;
int main()
{
    int number,count=0;
    cout<<"enter the number to check if it is prime or not:- "<<endl;
    cin>>number;
    for (int i = 1; i <= number; i++)
    {
        if (number%i==0)
        {
            count++;
        }
        else
        {
            continue;
        }
    }
    if (count>2)
    {
        cout<<"Not a prime."<<endl;
    }
    else
    {
        cout<<"Prime number."<<endl;
    }
    return 0;
}