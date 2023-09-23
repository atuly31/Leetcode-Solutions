class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
    // unordered_set<int> set1(nums1.begin(), nums1.end());
     int n = nums.size();
     vector<int> ans;
     set<int> s(nums.begin(),nums.end());
     for(int i=1;i<=n;i++){
         if(s.count(i)==0) ans.push_back(i);
     }
     return ans;
    }
};