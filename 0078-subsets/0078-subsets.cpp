class Solution {
public:

    void power_set(vector<vector<int>>&ans, vector<int> arr, vector<int> v,int n,int i)
    {
        if(i>=n)
        {
           ans.push_back(v);
           return;
        }
        v.push_back(arr[i]);
        power_set(ans,arr,v,n,i+1);

        v.pop_back();
        power_set(ans,arr,v,n,i+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) 
    {
        vector<vector<int>>ans;
        vector<int> v;
        int n = nums.size();
        power_set(ans,nums,v,n,0);
        return ans;
    }
};