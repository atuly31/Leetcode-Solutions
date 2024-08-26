class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mp;

        for(auto i:nums) mp[i]++;
        priority_queue<pair<int,int>>pq;

        for(auto i:mp) 
        {
            pq.push({i.second,i.first});
        }
       vector<int>vec;
        while(k--)
        {
           int x = pq.top().second;
           vec.push_back(x);
           pq.pop();
        }
        return vec;
    }
};