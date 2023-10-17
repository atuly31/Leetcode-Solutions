class Solution {
public:
    int findMin(vector<int>& nums) {
      int l =0,h = nums.size()-1;
      int mid = l + (h-l)/2;
      if(nums.size()==1) return nums[l];
        while(l<h){
            if(nums[l]<nums[h]) return nums[l];
            if(nums[mid]>=nums[l]) l = mid+1;
            else h = mid;
            mid = l + (h-l)/2;
        }
        return nums[l];
    }
};