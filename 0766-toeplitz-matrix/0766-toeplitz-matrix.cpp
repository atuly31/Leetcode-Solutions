class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
     int m = matrix.size();
     int n = matrix[0].size();
     int p =(m*n)-(m+n);
      int c=0;
     for(int i=0;i<m-1;i++){
         for(int j=0;j<n-1;j++){
             if(matrix[i][j]==matrix[i+1][j+1])
             { c=c+1;
             }
         }
     }
    //cout<<c;
    if(c==(p+1)){
        return true;
    }
    else {
        return false;
    }
    }
};