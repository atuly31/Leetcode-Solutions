class Solution {
public:
bool isMatch(string s, string p) {
        int m=s.length(),n=p.length();
        vector<vector<int>> dp(m+1,vector<int> (n+1,false));
        
        dp[0][0]=true;
        
        for(int j=1;j<=n;j++){
            bool flag=true;
            for(int jj=1;jj<=j;jj++)
                if(p[jj-1] != '*'){
                    flag=false;
                    break;
                }
            dp[0][j]=flag;
        }
        
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if(s[i-1] == p[j-1] || p[j-1] == '?')
                    dp[i][j]=dp[i-1][j-1];
                else if(p[j-1] == '*'){
                    int take=dp[i-1][j];
                    int notTake=dp[i][j-1];
                    dp[i][j]= (take||notTake);
                }
            }
        }
        return dp[m][n];
    }
};