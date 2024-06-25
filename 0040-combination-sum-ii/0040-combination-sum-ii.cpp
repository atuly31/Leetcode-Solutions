class Solution {
public:
    vector<vector<int>>ans;
   void combo(vector<int>v,vector<int>nums,int i,int n,int key)
   {
      
        if(key==0) {
        ans.push_back(v);
        return;
        }
        if(i>=n) return ;
        if(nums[i]<=key)
        {
            v.push_back(nums[i]);
            combo(v,nums,i+1,n,key-nums[i]);
            v.pop_back();
        }
        while(i<n-1 && nums[i]==nums[i+1]) i++;
        combo(v,nums,i+1,n,key);

   }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int>res;
        int n = candidates.size();
        sort(candidates.begin(),candidates.end());
        combo(res,candidates,0,n,target);
        
        
        return ans;
    }
};