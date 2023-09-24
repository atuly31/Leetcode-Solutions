class Solution {
public:
    static bool cmp(pair<int,int>&a,pair<int,int>&b){
         return (a.second==b.second) ? a.first>b.first : a.second<b.second;
    }
    
    vector<int> frequencySort(vector<int>& nums) {
     int n=nums.size();
     if(n==1) return nums;
     map<int,int>mp;
     for(auto i:nums) mp[i]++;
    
    vector<pair<int,int>>ans;
    for(auto i:mp) {
        ans.push_back(i);
    } 
    sort(ans.begin(),ans.end(),cmp);
     vector<int>pnr;
        for(auto i:ans){
            for(int j=0;j<i.second;j++)
               pnr.push_back(i.first);
        }
        return pnr;
    }
};