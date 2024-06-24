class Solution {
public:
  vector<vector<int>> ans;
   void combo(vector<int>&v,int n,int k,int i)
   {
    //if(v.size()>k) return;
    if(i>n || v.size()>k)
    {
        if(v.size()==k) ans.push_back(v);
        return; 
    }
    v.push_back(i);
    combo(v,n,k,i+1);
    v.pop_back();
    combo(v,n,k,i+1);
   }
    vector<vector<int>> combine(int n, int k) {
            
            vector<int> res;
            combo(res,n,k,1);
            return ans;
    }
};