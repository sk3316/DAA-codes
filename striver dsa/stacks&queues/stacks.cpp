#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int> diff;
        int min_price = INT_MAX;
        int max_profit = 0;
        diff.push_back(max_profit);
        int profit;
        for(int i=0;i<prices.size();i++)
        {
            if(prices[i]<min_price)
            {
                min_price=prices[i];
            }
            else{
                profit = prices[i] - min_price;
                diff.push_back(profit);
            }
        }
        sort(diff.begin(), diff.end());
        return diff.back();
        }
};
int main(){
    Solution s1;
    s1.maxProfit();
    prices[6] = {7,1,5,3,6,4};
    cout<<s1.maxProfit(prices);
}