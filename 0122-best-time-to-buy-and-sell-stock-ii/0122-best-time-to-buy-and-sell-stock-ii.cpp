class Solution {
public:
    int maxProfit(vector<int>& prices) {
     //int min = INT_MAX;
      int ans =0;
      for(int i=1;i<prices.size();i++){
       if(prices[i]>prices[i-1]){
        ans = ans +(prices[i]-prices[i-1]);
       }
      }
        return ans;
    }
};