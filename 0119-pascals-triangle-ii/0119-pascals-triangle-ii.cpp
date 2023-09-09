class Solution {
public:
    vector<int> getRow(int rowIndex) {
       vector<int> ans;
        long long pnr =1;
        ans.push_back(pnr);
        for(int col=0;col<rowIndex;col++){
            pnr=pnr*(rowIndex-col);
            pnr=pnr/(col+1);
            ans.push_back(pnr);
        }
        return ans;
    }
};