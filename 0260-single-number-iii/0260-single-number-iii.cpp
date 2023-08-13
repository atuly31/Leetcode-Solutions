class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
          vector<int>ans;
          map<int ,int> mp;
        for(auto i:nums){
            mp[i]++;
        }
         for(auto i:mp){
            if(i.second==1) ans.push_back(i.first);
            else continue;
           
        }
        return ans;
    }   
    
};