class Solution {
public:
    int maximumCount(vector<int>& nums) {
     int p =0,n=0;
    
    
        for(int i =0;i<nums.size();i++){
            if(nums[i]==0)
            {
                continue;
            }
            else if(nums[i]>0)
            {
                p++;
                }
            else
            {
                n++;
                }
        }
        int maxi = max(p,n);
        return maxi;
    }
};