class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
    vector<vector<int>> ans=grid;
     int r=0;
     int n =grid.size();
     for(int i=0;i<n;i++){
         
         for(int j=i;j<n;j++){
           swap(grid[i][j],grid[j][i]) ;
         }
     }
     for(int i=0;i<n;i++){
    
         for(int j=0;j<n;j++){
           if(grid[i]==ans[j]) r++ ;
         }
     }
     return r;
    }
};