class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int ,int> mp;
        //int c;
        for(auto i:nums){
            mp[i]++;
        }
         for(auto i:mp){
            if(i.second==1) return i.first;
        }
        return -1;
    } 
    
};