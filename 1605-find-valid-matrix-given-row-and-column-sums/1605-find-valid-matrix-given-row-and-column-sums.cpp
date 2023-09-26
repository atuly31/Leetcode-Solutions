class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
    int m = rowSum.size();
          int n = colSum.size();
          
          vector<vector<int>> res(m, vector<int>(n, 0));
          for(int i=0;i<m;i++){
              for(int j=0;j<n;j++){
                  int a = min(rowSum[i], colSum[j]);
                  res[i][j] = a;
                  rowSum[i] -= a;
                  colSum[j] -= a;
              }
          }
        
          return res;
    }    
    
};