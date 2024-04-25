class Solution {
public:
int cal(vector<int> &nums, int k)
   {
    int l=0,r=0,sum=1,cnt=0;
    if(k==0 || k==1) return 0;
    while(r<nums.size())
    {
        
        sum *=nums[r];
        while(sum>=k)
        {
            sum/=nums[l];
            l++;
        }
        if(sum<k)
        {
        cnt = cnt+ r-l +1;
        r++;
        }
        
    }
   
    return cnt;
   }
    
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int x = cal(nums,k);
        if(x<0) return 0;
        else return x;
    }
};