class Solution {
public:
    int maxProfit(vector<int>& p) {
         int maxi = INT_MIN;
        int i=0,j=0;
        int stock_pur = p[0];
        if(p.size()<=1) return 0;
        while(j<p.size()-1)
        {
           
           int diff =p[j+1]-stock_pur  ;
           if(p[j+1]<stock_pur)
           {
            stock_pur = p[j+1];
            cout<<stock_pur;
           }
            maxi = max(maxi,diff);
           j++;
            
        }
        if(maxi<0) return 0;
        return maxi;
    }
};