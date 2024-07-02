class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) 
    {
        map<int,int>mp1;
        map<int,int>mp2;
        for(auto i:nums1) mp1[i]++;
        for(auto i:nums2) mp2[i]++;

        vector<vector<int>> ans;
        vector<int>temp;
        for(auto i:mp1)
        {
            if(mp2.find(i.first)==mp2.end()) temp.push_back(i.first);
        }
        ans.push_back(temp);
        temp.clear();
        for(auto i:mp2)
        {
            if(mp1.find(i.first)==mp1.end()) temp.push_back(i.first);
        }
        ans.push_back(temp);
        
        
        return ans;
    }
};