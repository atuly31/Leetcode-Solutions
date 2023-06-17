class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
       sort(nums.begin(),nums.end());
        int n=nums.size();
        return nums[n-k];
       // return nums;
       // for(int i=0;i<nums.size();i++)
        //{
          //  return nums[i];
        }
    //}

};