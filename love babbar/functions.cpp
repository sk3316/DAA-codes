#include <bits/stdc++.h>
#include <math.h>
using namespace std;

// int power(int a, int b)
// {
//     int z = pow(a, b);
//     return z;
// }

// bool isEven(int n)
// {
//     if(n%2==0) return 1;

//     return 0;

// }

// int factorial(int x)
// {
//     int fact = 1;
//     for (int i = 1; i <= x; i++)
//     {
//         fact = fact * i;
//     }

//     return fact;

// }

// int nCr(int n, int r)
// {
//     int num = factorial(n);

//     int denom = factorial(r) * factorial(n-r);

//     return (num/denom);
// }

int ap(int n)
{
    int num;
    num = (3 * n) + 7;
    return num;
}

int setbit(int a, int b)
{
    int sum_a = 0;
    int k;
    int m;
    int sum_b = 0;

    while (a != 0)
    {
        k = a % 2;
        sum_a = sum_a + k;
        a = a / 2;
    }

    while (b != 0)
    {
        m = b % 2;
        sum_b = sum_b + m;
        b = b / 2;
    }

    int sum = sum_a + sum_b;

    return sum;
}


void fib(int num)
{
    int a = 0;
    int b = 1;
    int ans = 0;
    cout<<a<<" "<<b<<" ";
    for (int i = 0; i < num; i++)
    {
        ans = a + b; 
        cout<<ans<<" ";
        a = b; // 1, 1
        b = ans; // 1, 2
    }

    return;
    
}


int main()
{
    // int a;
    // int b;
    // cout<<"Enter the value of a & b separated by spaces: "<<endl;
    // cin >> a >> b;
    // int z = power(a, b);
    // cout << z << endl;

    // isEven(5);

    // int n;
    // cin>>n;
    // int r;
    // cin>>r;

    // if (isEven(num))
    // {
    //     cout<<"number is even"<<endl;
    // }
    // else
    // {
    //     cout<<"number is odd"<<endl;
    // }

    // int k = factorial(num);
    // cout<<k<<endl;

    // int c = nCr(n,r);
    // cout<<c;

    // fibonnaci series 0 1 1 2 3 5 8

    // int ans = 1;
    // int a = 0,b = 1;
    // int n;
    // cin>>n;
    // cout<<a<<" "<<b<<" ";
    // for (int  i = 0; i < n; i++)
    // {
    //     cout<<ans<<" ";
    //     a = b;
    //     ans = ans + b;
    //     b = ans;
    // }

    // occurence of number in array

    // int arr[10],n;
    // cout<<"enter number of elements in array"<<endl;
    // cin>>n;

    // for (int i = 0; i < n; i++)
    // {
    //     cout<<"enter "<<i+1<<" term"<<endl;
    //     cin>>arr[i];
    // }

    // int key;
    // cout<<"Enter the key element to be found"<<endl;
    // cin>>key;
    // int count = 0;
    // for (int  j = 0; j < n; j++)
    // {
    //     if (arr[j]==key)
    //     {
    //         count++;
    //     }
    //     else
    //     {
    //         continue;
    //     }

    // }
    // cout<<"Number of occurrences are:- "<<count<<endl;

    // int n, z;
    // cin >> n;
    // z = ap(n);
    // cout << z;

    // int sum_a = 0;
    // int k;
    // int m;
    // int sum_b = 0;
    // int a,b;
    
    // cin>>a>>b;


    // while (a != 0)
    // {
    //     k = a % 2;
    //     sum_a = sum_a + k;
    //     a = a / 2;
    // }

    // while (b != 0)
    // {
    //     m = b % 2;
    //     sum_b = sum_b + m;
    //     b = b / 2;
    // }

    // cout<<sum_a<<" "<<sum_b<<endl;

    // int a,b,c;
    // cin>>a>>b;
    // c = setbit(a,b);
    // cout<<c<<endl;

    int num;
    cin>>num;
    fib(num);

    return 0;
}