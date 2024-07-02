#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main()
{
    // int n;
    // int k;
    // int sum = 0;
    // int product = 1;
    // cin >> n;

    // while (n > 0)
    // {
    //     k = n % 10;
    //     sum = sum + k;
    //     product = product * k;
    //     n = n / 10;
    //     k = n;
    // }

    // cout <<product - sum << endl;
    // cout << << endl;

    // int i;
    // int k;
    // char buffer[33];
    // scanf("%d", &i);
    // itoa(i, buffer, 2);
    // printf("binary: %s\n", buffer);
    // int n = stoi(buffer);
    // cout << n<<endl;
    // int sum = 0;
    // while (n > 0)
    // {
    //     k = n % 10;
    //     sum = sum + k;
    //     // product = product * k;
    //     n = n / 10;
    //     k = n;
    // }

    // cout<< sum<<endl;

    // int n = 2147483645;
    // // int k = bitset<32>(n).count();
    // reverse(n.begin(),n.end());
    // cout<<n;

    // int n;
    // cin>>n;
    // int ans = 0;
    // int i = 0;
    // while (n!=0)
    // {
    //     int bit = n&1;
    //     ans = (bit * pow(10,i)) + ans;
    //     n = n>>1;
    //     i++;
    // }

    // cout<<ans;

    int i, cnt_true = 0, cnt_false = 0;
    int n;
    cin >> n;
    for (i = 0; i <= n/2; i++)
    {
        if ((pow(2, i)) == n)
        {
            // cout<<"true"<<endl;
            cnt_true++;
        }
        else
        {
            // cout<<"false"<<endl;
            cnt_false++;
        }
    }
    if (cnt_true >= 1)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }

    return 0;
}