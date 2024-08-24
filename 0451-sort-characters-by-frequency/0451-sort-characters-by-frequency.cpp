class Solution {
public:

    string frequencySort(string s) 
    {
        map<int,int>mp;
        for(auto i:s)mp[i]++;
        auto cmp = [&](char a , char b)
        {
            return mp[a]>mp[b];
        };
        sort(s.begin(),s.end() ,cmp);
        return s;
    }
};