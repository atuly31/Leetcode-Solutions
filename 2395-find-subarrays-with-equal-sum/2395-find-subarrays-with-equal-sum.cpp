class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
     map<int,int> mp;
        for(int i=0;i<nums.size()-1;i++){
            mp[nums[i]+nums[i+1]]++;
        }
        for(auto i:mp){
            if(i.second>=2) return true;
        }
        return false;
    }
};