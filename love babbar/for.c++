#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int i = 7;
    // cout<<i++<<endl;
    // cout<<++i<<endl;
    // cout<<i--<<endl;
    // cout<<--i<<endl;

    // int n;
    // cout<<"enter the value of n"<<endl;
    // cin>>n;
    // cout<<"printing count from 1 to "<<n<<endl;
    // for (int i = 1; i <= n; i++)
    // {
    //     cout<<i<<endl;
    // }

    // int count = 5;

    //     for (int a = 0, b = 1; a < count, b< count ; a++, ++b)
    //     {
    //         cout<<a<<" "<<b<<endl;
    //     }

    // int n;
    // cin>>n;
    // for (int i = 1; i <= n; i++)
    // {
    //     sum+=i;
    // }

    // cout<<sum;

    // 0 1 1 2 3 5 7 12

    // int a = 0, b = 1 ;
    // cout<< a <<" "<< b <<" " ;
    // for (int i = 1 ; i <= n ; i++)
    // {
    //     int sum = a + b ;
    //     cout<< sum <<" " ;
    //     a = b ;
    //     b = sum ;
    // }

    // prime number: 1, 2, 3, 5, 7, 9, 11, 13

    int n, count = 0, k;
    cin >> n;
    
    for (int j = 0; j < k; j++)
    {

        for (int i = 2; i <= n; i++)
        {
            if (n % i == 0)
            {
                count++;
            }
            else
            {
                continue;
            }
        }
    }


    if (count > 1)
    {
        cout << n << " is not prime" << endl;
    }
    else
    {
        cout << n << " is prime" << endl;
    }
    return 0;
}