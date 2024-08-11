class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
        vector<pair<int,int>>pq;
        int n = mat.size();
        int m = mat[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(mat[i][j]==0) pq.push_back({i,j});
            }
        }
        for(auto i:pq)
        {
            fill(mat[i.first].begin(),mat[i.first].end(),0);
            for(int j =0;j<n;j++) 
            {
                mat[j][i.second]=0;
            }
        }
    }
};