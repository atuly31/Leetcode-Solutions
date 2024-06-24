class Solution {
public:
   vector<vector<int>> ans ;
   void combo(vector<int>v,vector<int>nums,int i,int n,int key)
   {
      
      if(key==0) {
        ans.push_back(v);
        return;
      }
      if(i>=n) return;
     if(nums[i]<=key)
     {
      v.push_back(nums[i]);
      combo(v,nums,i,n,key-nums[i]);
      v.pop_back();
     }
      
      combo(v,nums,i+1,n,key);

   }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>res;
        int n = candidates.size();
        combo(res,candidates,0,n,target);
        return ans;
    }
};