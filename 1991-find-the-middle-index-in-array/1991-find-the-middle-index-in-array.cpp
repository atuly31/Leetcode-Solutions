class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
     int ls=0,rs=0,sum=0; 
      for(int i=0;i<nums.size();i++){
          sum = sum+nums[i];
      }
    
      for(int i=0;i<nums.size();i++){
         if(ls==sum-nums[i]){
             return i;
         }
          ls = ls+nums[i];
          sum = sum-nums[i];
      }
    return -1;
    }
};