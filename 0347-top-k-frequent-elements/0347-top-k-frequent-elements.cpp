class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        map<int,int>mp;
        for(auto & i:nums) mp[i]++;

        vector<pair<int,int>>pr  (mp.begin(),mp.end());
        auto cmp = [&](pair<int,int>&a ,pair<int,int>&b)
        {
            return a.second >b.second;
        };
        sort(pr.begin(),pr.end(),cmp);
        vector<int>vec;
        vector<int>ans;
      
        
            for(auto i:pr) 
            {
                vec.push_back(i.first);
            }
            int i=0;
        while(k--)
        {
            ans.push_back(vec[i]);
            i++;
        }
        
        return ans;
    }
};