class Solution {
public:
    void rotate(vector<int>& nums, int k) {
       vector<int>ans;
     k = k % nums.size();
  
      int p = nums.size()-k;
       for(int i=p;i<nums.size();i++){
           ans.push_back(nums[i]);
       }
        for(int i=0;i<p;i++){
           ans.push_back(nums[i]);
       }
         for(int i=0;i<ans.size();i++){
            nums[i]=ans[i];
       
    }
    }
};