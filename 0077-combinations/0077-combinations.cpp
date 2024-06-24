class Solution {
public:
   void combo(vector<vector<int>> &ans,vector<int>v,int n,int k,int i)
   {
    if(v.size()>k) return;
    if(i>n)
    {
        if(v.size()==k) ans.push_back(v);
        return; 
    }
    v.push_back(i);
    combo(ans,v,n,k,i+1);
    v.pop_back();
    combo(ans,v,n,k,i+1);
   }
    vector<vector<int>> combine(int n, int k) {
            vector<vector<int>> ans;
            vector<int> res;
            combo(ans,res,n,k,1);
            return ans;
    }
};