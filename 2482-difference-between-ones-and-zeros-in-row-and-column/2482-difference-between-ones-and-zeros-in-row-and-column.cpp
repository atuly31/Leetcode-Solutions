class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
      //vector<vector<int>> ans;
      int n = grid.size();
      int m = grid[0].size();
       vector<int> onesrow(n);
       vector<int> onescol(m);
        vector<int> zerorow(n);
        vector<int> zerocol(m);
     
      for(int i=0;i<n;i++){
           int c=0,d=0;
           for(int j=0;j<m;j++){
               if(grid[i][j]==1) c=c+1;
               else d=d+1;
           }
          onesrow[i]=c;
          zerorow[i]=d;
    }
     
      for(int j=0;j<m;j++){
          int p=0,q=0;
          for(int i=0;i<n;i++)
           {
               if(grid[i][j]==1) p=p+1;
               else q=q+1;
           }
          onescol[j]=p;
          zerocol[j]=q;
    }
           vector<vector<int>> ans(n,vector<int>(m,0));
         for(int i=0;i<n;i++){
           for(int j=0;j<m;j++){
             ans[i][j]= onesrow[i] + onescol[j]- zerorow[i]-zerocol[j];
           }
          }
        return ans;
    }
};