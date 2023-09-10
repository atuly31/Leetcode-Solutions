class Solution {
public:
    int triangularSum(vector<int>& nums) {
     int n=nums.size();
     vector<int> ans(n-1);
     if(n==1) return nums[0];
      for(int i=0;i<n-1;i++){
          ans[i]=(nums[i] + nums[i+1]) % 10;
      }
        int res = triangularSum(ans);
        return res;
    }
};