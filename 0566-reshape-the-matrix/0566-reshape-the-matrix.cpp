class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
     int a =mat.size();
     int b =mat[0].size();
     vector<vector<int> > ans(r,vector<int>(c));
     vector<int>v ;
     int m = a*b;
       if((r*c)!=(a*b))
       {
           return mat;
       }
    else {
        for(int i=0;i<a;i++){
               for(int j=0;j<b;j++){
                v.push_back(mat[i][j]);  
               }
           }
          int k=0;
          for(int i=0;i<r;i++){
               for(int j=0;j<c;j++){
               ans[i][j]=v[k];
                   k++;
               }
           }  
           return ans;
        
    }
    }
    
};