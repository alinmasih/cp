class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans=0;
        int n=prices.size(), buy=INT_MAX;
        for(int i=0; i<n;i++){
            if(buy>prices[i]){
                buy=prices[i];
            }
            else{
                ans = max(ans,prices[i]-buy);
            }
        }
    }
};