#include <iostream>
using namespace std;
int main()
{
    // int a, b;
    // cin >> a >> b;
    // if (a > b)
    // {
    //     cout << a << endl;
    // }
    // else if (b > a)
    // {
    //     cout << b << endl;
    // }
    // else
    // {
    //     cout << "both are equal" << endl;
    // }

    // char ch;
    // cout << "enter the value of ch: " << endl;
    // cin >> ch;
    // if (ch >= 97 && ch <= 122)
    // {
    //     cout << "your entered value lies between the lower case alphabets." << endl;
    // }
    // else if (ch >= 65 && ch <= 90)
    // {
    //     cout << "your entered value lies between upper case alphabets. " << endl;
    // }
    // else if (ch >= 48 && ch <= 57)
    // {
    //     cout << "your entered value lies between 0 to 9." << endl;
    // }
    // else
    // {
    //     cout << "it is a symbol." << endl;
    // }

    // int i, n, sum = 0;
    // cin >> i >> n;
    // while (i <= n)
    // {
    //     sum += i;
    //     cout << sum << endl;
    //     // cout<<i<<endl;
    //     i++;
    // }

    // int n, i = 2;
    // cin >> n;
    // while (i < n)
    // {
    //     if (n % i == 0)
    //     {
    //         cout << i << "it is composite." << endl;
    //     }
    //     else
    //     {
    //         cout << i << "it is a prime number." << endl;
    //     }
    //     i++;
    // }

    // int n, i = 1;
    // cin >> n;
    // while (i <= n)

    // {
    //     int j = 1;
    //     while (j <= n)
    //     {
    //         cout << "*";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << i;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}