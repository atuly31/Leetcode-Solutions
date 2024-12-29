class Solution {
public:
   bool solve (vector<int>& nums, vector<vector<int>>& dp , int sum , int n ,int i,int key )
   {
      if(i==n)
      {
        
         if(sum==key ) return true;
         else return false;
      }
      if (sum==key) return true;
      
      if(sum<key) return false;
      if(dp[i][sum]!=-1) return dp[i][sum]; 
      bool left = solve(nums,dp,sum-nums[i],n,i+1,key);
      if(left) return true;
      bool right = solve(nums,dp,sum,n,i+1,key);
      if(right) return true;
      return dp[i][sum] = left || right;
   }
    bool canPartition(vector<int>& nums) {
        int sum =0;
        for(auto i:nums) sum+=i;
        int half =sum/2;
        if(sum%2!=0) return false ; 
        int n = nums.size();
        vector<vector<int>>dp(n,vector<int>(sum+1,-1));
        return solve(nums,dp,sum,n,0,half);
    }
};