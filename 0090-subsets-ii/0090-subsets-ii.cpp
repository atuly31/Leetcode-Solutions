class Solution {
public:
   void subset(vector<vector<int>>& ans, vector<int> temp,vector<int>nums,set<vector<int>>st, int i)
   {
    if(i==nums.size())
    {
         ans.push_back(temp);
         return;
    }
    temp.push_back(nums[i]);
    subset(ans,temp,nums,st,i+1);
    temp.pop_back();
    while(i<nums.size()-1 && nums[i]==nums[i+1]) i++;
    subset(ans,temp,nums,st,i+1);

   }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) 
    {
        set<vector<int>>st;
        vector<int> temp;
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        subset(ans,temp,nums,st,0);
        for(auto i:st) ans.push_back(i);
        return ans;
    }
};