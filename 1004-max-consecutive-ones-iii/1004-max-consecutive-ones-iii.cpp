class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l=0,r=0,len = 0, zero =0;
        while(r<nums.size())
        {
           if(nums[r]==0) zero++;
           while(zero>k)
           {
            if(nums[l]==0)
            {
                l++;
                zero--;
            }
            else l++;
           }
           len = max(len,r-l+1);
           r++;
           

        }
        return len;
    }
};