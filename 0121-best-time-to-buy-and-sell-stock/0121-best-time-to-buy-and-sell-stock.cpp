class Solution {
public:
    int maxProfit(vector<int>& prices) {
     //sort(prices.begin(),prices.end());
        int min = INT_MAX;
        int a=0,b=0;
        for(int i=0;i<prices.size();i++){
         if(prices[i]<min){
             min=prices[i];
         }
            b = abs(min-prices[i]);
            if(a<b){
                a=b;
          }
        
    }
        return a;
    }
};