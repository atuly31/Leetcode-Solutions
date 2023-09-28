class Solution {
public:
     static bool comparator(pair<string,int> p1, pair<string,int> p2)
    {
        if(p1.second>p2.second || (p1.second==p2.second && p1.first<p2.first))
            return true;
        return false;
    }
    vector<string> topKFrequent(vector<string>& words, int k) {
     unordered_map<string,int> mp;
        for(auto i:words) mp[i]++;
  
    vector<pair<string,int>>ans;
     for(auto i=mp.begin();i!=mp.end();i++){
        ans.push_back({i->first,i->second});
    }
    sort(ans.begin(),ans.end(),comparator);
    vector<string>pnr;
    for(int i=0;i<k;i++){
     pnr.push_back(ans[i].first)  ;   
    }
    return pnr;
          }
};