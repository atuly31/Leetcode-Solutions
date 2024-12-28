class Solution {
public:
    int solve (vector<int>& nums , vector<int>& dp,int n,int i)
    {
        if(i>n) return 0;
        if(dp[i]!=-1) return dp[i];
        int left = solve(nums,dp,n,i+2)+nums[i];
        int right = solve(nums,dp,n,i+1) + 0;
        dp[i] = max(left,right);
        return dp[i];
    }
    
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(nums.size()==1) return nums[0];
        if(nums.size()==0) return 0;
        vector<int>dp(n+1,-1);
        vector<int>dp2(n+1,-1);
        int first = solve(nums,dp,n-2,0);
        int second  =  solve(nums,dp2,n-1,1);
        cout<<second;
       return max(first,second);
    }
};