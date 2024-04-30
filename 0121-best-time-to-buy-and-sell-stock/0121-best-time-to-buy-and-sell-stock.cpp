class Solution {
public:
    int maxProfit(vector<int>& p) {
         int maxi = 0;
        int i=0,j=0;
        int stock_pur = p[0];
        if(p.size()<=1) return 0;
        while(j<p.size()-1)
        {
           
       
            maxi = max(maxi,p[j+1]-stock_pur);
            stock_pur = min(p[j+1],stock_pur);
            
           j++;
            
        }
        // if(maxi<0) return 0;
        return maxi;
    }
};