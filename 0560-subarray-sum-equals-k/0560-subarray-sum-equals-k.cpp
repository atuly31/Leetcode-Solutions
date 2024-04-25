class Solution {
public:

   int cal(vector<int> &nums, int k)
   {
    int l=0,r=0,sum=0,cnt=0;
    if(k<0) return 0;
    while(r<nums.size())
    {
        
        sum +=nums[r];
        while(sum>k)
        {
            sum-=nums[l];
            l++;
        }
        cnt = cnt+ r-l +1;
        r++;
    }
    return cnt;
   }
    int subarraySum(vector<int>& nums, int k) {
        int x = cal(nums,k);
        int y = cal(nums,k-1);
        return abs(x-y);
        
    }
};