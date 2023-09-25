class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
     int n = nums.size()/2; 
     int c;
     map<int,int>mp;
        for(auto i:nums) mp[i]++;
        for(auto i:mp){
            if(i.second==n)  c=i.first;
        }
        return c;
    }
};