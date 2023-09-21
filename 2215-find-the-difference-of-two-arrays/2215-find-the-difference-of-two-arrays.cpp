class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
     set<int>s;
     set<int>p;
     vector<vector<int>> ans;
     for(auto i:nums1){
         s.insert(i);
     }
    for(auto i:nums2){
         p.insert(i);
     }
     vector<int>a;
     for(auto i:s){
         if(p.count(i)==0) a.push_back(i);
     }
      ans.push_back(a);
      a.clear();
     for(auto i:p){
         if(s.count(i)==0) a.push_back(i);
     }
     ans.push_back(a);
        return ans;
    }
};