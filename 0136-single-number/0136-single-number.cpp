class Solution {
public:
    int singleNumber(vector<int>& nums) {
     map<int ,int> mp;
        int c;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
         for(auto i:mp){
            if(i.second==1) c= i.first;
        }
        return c;
    }
};