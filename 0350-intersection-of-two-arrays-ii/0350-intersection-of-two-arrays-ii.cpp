class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) 
    {
      std::map<int,int>mp1;
       std::map<int,int>mp2;
        vector<int>ans;
        for(auto i:nums2) mp2[i]++;
        for(auto i:nums1) mp1[i]++;
        for(auto i:mp2)
        {
            if(mp1.find(i.first)!=mp1.end())
            {
                    int temp = mp1[i.first];
                    int val;
                    if(temp>i.second) val = i.second;
                    else val = temp;
                    while(val--) ans.push_back(i.first);
                    mp1.erase(i.first);
            }
            else continue;
           
        }
        return ans;
    }
};