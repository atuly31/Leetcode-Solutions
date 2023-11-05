class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
      int s =0;
      int e = nums.size()-1;
      int mid = s+(e-s)/2;
      while(s<e){
          if(mid%2==1) mid--;
          if(nums[mid]!=nums[mid+1]) e = mid;
          else s = mid+2;
          mid = s+(e-s)/2;
      }
      return nums[s];
    }
};