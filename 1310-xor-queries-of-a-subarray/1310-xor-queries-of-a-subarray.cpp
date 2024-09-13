class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int>ans;
        for(int i=0;i<queries.size();i++)
        {
            int ptr = queries[i][0];
            int end = queries[i][1];
            int val =0;
            for(int j=ptr;j<=end;j++)
            {
            val = val ^ arr[j];
            
            }
            ans.push_back(val);
        }
        return ans;
    }
};