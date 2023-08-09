class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
       vector<vector<int>> ans; 
        int n = matrix.size();
        int m = matrix[0].size();
        for(int i=0;i<m;i++){
            vector<int>s;
            for(int j=0;j<n;j++){
                s.push_back(matrix[j][i]);
                
            }
            reverse(s.begin(),s.end());
            ans.push_back(s);
        }
        
         for(int i=0;i<m;i++){

            for(int j=0;j<n;j++){
             matrix[i][j]=ans[i][j];
            }
          }
        
      // reverse(matrix.begin(),matrix.end());
    }
};