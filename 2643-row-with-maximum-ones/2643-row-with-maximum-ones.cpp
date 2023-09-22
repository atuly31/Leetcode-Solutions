class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
     int m = mat.size();
     int n= mat[0].size();
     int c=0;
     vector<int>p;
     vector<int>z;
     for(int i=0;i<m;i++){
         
         for(int j=0;j<n;j++){
          if(mat[i][j]==1) c++;
         }
         p.push_back(c);
         c=0;
     }
    int maxi= INT_MIN;
    int j =0;
    for(int i=0;i<p.size();i++){
    
     if(p[i]>maxi){
         maxi=p[i];
         j=i;
     }
    }
    z.push_back(j);
    z.push_back(maxi);
      return z;
    }
};