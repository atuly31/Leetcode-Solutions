class Solution {
public:
    vector<int> ncr(int n){
        long long pns = 1;
        vector<int> ktr;
        ktr.push_back(pns);
        for(int i=0;i<n;i++){
            pns = pns*(n-i);
            pns = pns/(i+1);
            ktr.push_back(pns);
        }
        return ktr;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i=0;i<numRows;i++){
          ans.push_back(ncr(i)); 
    }
    return ans;
    }
};