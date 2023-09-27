class Solution {
public:
    int maxSum(vector<vector<int>>& mat) {
    int m=mat.size();
    int n = mat[0].size();
    int maxi = INT_MIN;
    for(int i=0;i<m-2;i++){
        for(int j=0;j<n-2;j++){
           int sum = (mat[i][j]+mat[i][j+1]+mat[i][j+2])+(mat[i+1][j+1])+ (mat[i+2][j]+mat[i+2][j+1]+mat[i+2][j+2]);  
             maxi = max(maxi,sum);
        }
     }
        return maxi;
    }
};