class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int cnt=0;
        int l=0,r=0,sum=nums[r];
        while(r<nums.size()){
           
            
            if(sum==goal)
            { 
                sum = sum+nums[r];
                cnt++;
                r++;
            }
            else if(sum<goal)
            {
                sum = sum+nums[r];
                r++;
            }
            else 
            {
                sum = sum-nums[l];
                l++;
            }
        }
        return cnt;
    }
};