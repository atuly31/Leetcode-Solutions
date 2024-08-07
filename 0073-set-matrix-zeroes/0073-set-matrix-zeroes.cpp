class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
        vector<pair<int,int>>p;
        int n = mat.size();
        int m = mat[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(mat[i][j]==0) p.push_back({i,j});
                else continue;
            }
        }
        for(auto i:p)
        {
            int row =i.first;
            int col = i.second;
            fill(mat[row].begin(),mat[row].end(),0);
            for(int i=0;i<n;i++) mat[i][col]=0;
        }
    }
};