class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        ios::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++) mp[nums[i]]=i;

        for(int i=0;i<nums.size();i++) 
        {
            int val = target-nums[i];
            if(mp.find(val)!=mp.end())
            {
                if(i!=mp[val]) return {i,mp[val]};
            }
        }
          return {};
    }
};