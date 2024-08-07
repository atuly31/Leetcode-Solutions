class Solution {
public:
//  static bool cmp(int a ,int b)
//  {
//     if(mp[a]==mp[b]) return mp[a]>mp[b];
//     return mp[a]<mp[b];
//  }
    vector<int> frequencySort(vector<int>& nums) {
        map<int,int>mp;

        for(auto i:nums)mp[i]++;
       auto cmp = [&](int a ,int b)
       {
          if(mp[a]==mp[b]) return a>b;
           return mp[a]<mp[b];
       };
        sort(nums.begin(),nums.end(),cmp);
        return nums;
    }
};