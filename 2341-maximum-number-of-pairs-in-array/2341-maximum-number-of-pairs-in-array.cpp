class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        map<int,int>mp;
        for(auto i:nums) mp[i]++;
        vector<pair<int,int>>p;

        for(auto i:nums)
        {
            if(mp[i]>1)
            {
                p.push_back({i,i});
                mp[i]=mp[i]-2;
            }
        }
        int rem_val=0;
        for(auto i:mp)
        {
           rem_val+=i.second;
        }
        vector<int>ans(2);
        
            ans[0]=p.size();
            ans[1]=rem_val;
        return ans;
        
    }
};