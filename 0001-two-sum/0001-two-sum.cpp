class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]=i;
        }
        int a=0,b=0;
        for(int i=0;i<nums.size();i++)
        {
           int diff = target - nums[i];
          if( mp.find(diff)!=mp.end())
          {
              if(i!=mp[diff]) return {i,mp[diff]};
          }
        }
        return {};
    }
};