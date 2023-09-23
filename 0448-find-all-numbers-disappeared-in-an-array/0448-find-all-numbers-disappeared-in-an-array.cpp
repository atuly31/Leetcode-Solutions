class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
    // unordered_set<int> set1(nums1.begin(), nums1.end());
     int n = nums.size();
     set<int> s(nums.begin(),nums.end());
     set<int> p;
     vector<int> ans;
     for(int i=1;i<=n;i++){
        p.insert(i); 
     }
     for(auto i:p){
         if(s.count(i)==0) ans.push_back(i);
     }
     return ans;
    }
};