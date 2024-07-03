#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num, k, i = 0, ans = 0;
    cout << "Enter the number you want to reverse: " << endl;
    cin >> num;
    while (num > 0)
    {
        k = num % 10;
        ans = (ans * 10) + k;
        num = num/10;
        // i++;
    }
    cout<<ans<<endl;
    return 0;
}