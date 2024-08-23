class Solution {
public:
  int solve(vector<int> &nums ,int i,int n,vector<int>&dp)
  {
            if(i>=n) return 0; 
            if(dp[i]!=-1) return dp[i];
            int left = nums[i] + solve(nums,i+2,n,dp);
            int  right = 0 + solve(nums,i+1,n,dp);
            return dp[i] = max(left,right);
       
  }
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int>dp(n,-1);
         return solve(nums,0,n,dp);
    }
};