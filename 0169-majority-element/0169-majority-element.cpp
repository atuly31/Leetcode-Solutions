class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ele = nums[0];
        int n = nums.size();
        int cnt =1;
        for(int i=1;i<n;i++)
        {
            if(cnt==0)
            {
                ele = nums[i];
                cnt++;
            }
            else if(nums[i]!=ele) cnt--;
            else cnt++;
        }
        int count=0;
         for(int i=0;i<n;i++)
         {
            if(ele==nums[i]) count++;
         }
         if(count>n/2) return ele;
         return -1;
    }
};