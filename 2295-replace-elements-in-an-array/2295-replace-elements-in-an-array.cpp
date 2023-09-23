class Solution {
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& operations) {
     int n = operations.size();
     unordered_map<int,int> mp;
     for(int i=0;i<nums.size();i++){
          mp[nums[i]]=i;
     }
        
     for(int i=0;i<n;i++){
         int x=mp[operations[i][0]];
         nums[x]= operations[i][1];
         mp[operations[i][1]]=x;
        }
     return nums;
    }
};