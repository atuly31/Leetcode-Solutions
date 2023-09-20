class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
      vector<int>pos;
      vector<int>neg;
      vector<int>ans;
      for(int i=0;i<nums.size();i++){
          if(nums[i]>=0) pos.push_back(nums[i]);
          else neg.push_back(nums[i]);
      }
      int n=pos.size();
      //int m =neg.size();
     
      for(int i=0;i<n;i++){
          ans.push_back(pos[i]);
          ans.push_back(neg[i]);
      }
        return ans;
    }
};