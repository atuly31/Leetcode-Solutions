class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
     map<int ,int> mp;
     vector<int> ans;
     for(auto i:nums) mp[i]++;
     for(auto i:mp) {
         if(i.second==2) ans.push_back(i.first) ;
     }
      return ans;
    }
};