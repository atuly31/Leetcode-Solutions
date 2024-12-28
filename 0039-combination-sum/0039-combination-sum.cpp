class Solution {
public:

    void solve (vector<int>& arr, int target , int sum ,int i,vector<int>vec,vector<vector<int>>& ans,int n)
    {
        if(i>=n || sum>target) return ;
        if(sum ==target)
        {
           ans.push_back(vec);
           return;
        }
        vec.push_back(arr[i]);
        sum+=arr[i];
        solve(arr,target,sum,i,vec,ans,n);// PICK
        vec.pop_back(); 
        sum-= arr[i];
        solve(arr,target,sum,i+1,vec,ans,n); // NOT PICK
    }
    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
         vector<vector<int>> ans;
         vector<int>vec;
         int n = arr.size();
         solve(arr,target,0,0,vec,ans,n);
         return ans;
    }
};