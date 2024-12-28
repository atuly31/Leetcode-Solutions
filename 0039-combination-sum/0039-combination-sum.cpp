class Solution {
public:

    void solve (vector<int>& arr, int target,int i,vector<int>vec,vector<vector<int>>& ans,int n)
    {
        if(i>=n || target<0 ) return ;
        if(target==0)
        {
           ans.push_back(vec);
           return;
        }
        vec.push_back(arr[i]);
       
        solve(arr,target-arr[i],i,vec,ans,n);// PICK
        vec.pop_back(); 
        solve(arr,target,i+1,vec,ans,n); // NOT PICK
    }
    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
         vector<vector<int>> ans;
         vector<int>vec;
         int n = arr.size();
         solve(arr,target,0,vec,ans,n);
         return ans;
    }
};