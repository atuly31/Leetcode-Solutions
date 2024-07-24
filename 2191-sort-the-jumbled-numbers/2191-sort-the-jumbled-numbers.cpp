class Solution {
public:
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) 
    {
        map<int,int>mp;
        vector<int>vec;
        for(int i=0;i<mapping.size();i++) mp[i]=mapping[i];
        for(auto i:nums)
        {
            string val = to_string(i);
            int j = val.size()-1;
            while(j>=0){
                int digit = val[j]-'0';
                char ch = mp[digit]+'0';
                val[j] = ch;
                j--;
            }
            int mapped_value = stoi(val);
            vec.push_back(mapped_value);
        }
        vector<pair<int,int>>pr;
        for(int i=0;i<nums.size();i++)
        {
           pr.push_back({nums[i],vec[i]});
        }
        auto cmp = [&](pair<int,int>a,pair<int,int>b)
        {
            return a.second<b.second;
        };
           
       sort(pr.begin(),pr.end(),cmp);
       vector<int>ans;
       for(auto i:pr) ans.push_back(i.first);
      return ans;
    }
};