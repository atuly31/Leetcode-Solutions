class Solution {
public:
    void combo(vector<vector<int>> &ans,vector<int>temp,int k,int n,int start)
    {   
        if(n==0 && temp.size()==3)
           {
            ans.push_back(temp);
            return;
           }
        if(start>9) return;

        if(start<=n && temp.size()<=k )
        {
            for(int i=start;i<=9;i++)
            {
                temp.push_back(i);
                combo(ans,temp,k,n-i,i+1);
                temp.pop_back();
            }
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) 
    {
        vector<vector<int>>ans;
        vector<int>temp;
        combo(ans,temp,k,n,1);
        return ans;
    }
};