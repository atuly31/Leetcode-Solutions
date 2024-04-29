class Solution {
public:
    int longestSubarray(vector<int>& nums) {
      unordered_map<int,int> mpp;
      int l=0,r=0,maxlen =0;
      int cnt =0;
      while(r<nums.size())
      {
        mpp[nums[r]]++;
        
        if(nums[r]==0) cnt++;

        while(cnt>1)
        {
            mpp[nums[l]]--;
            if(nums[l]==0)
            {
                mpp.erase(nums[l]);
                cnt=0;
                r--;
            }
            l++;
            
        }
        maxlen = max(maxlen,r-l);
        r++;
      } 
      return maxlen; 
    }
};