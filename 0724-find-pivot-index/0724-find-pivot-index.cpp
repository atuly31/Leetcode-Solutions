class Solution {
public:
    int pivotIndex(vector<int>& nums) {
      int ls =0,rs=0,sum=0;
        for(int i=0;i<nums.size();i++){
            sum = sum+nums[i];
        }
         for(int i=0;i<nums.size();i++){
             if(i==0){
               ls=0;  
             }
             else{
             ls=ls+nums[i-1];
             }

             rs = sum-(nums[i]+ls);  
           if(ls==rs){
          return i;           
           }
          }
    return -1;
    }
};