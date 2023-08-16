class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
    vector<int> ans;
    int k = nums.size()/3;
    map<int,int> mp;
     for( auto i:nums){
         mp[i]++;
     }
     for( auto i:mp){
         if(i.second>k) ans.push_back( i.first);
     }
      return ans;
    }   
    
};