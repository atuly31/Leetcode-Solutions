class Solution {
public:
    int arraySign(vector<int>& nums) {
    int d=0;
    for(int i=0;i<nums.size();i++){
     if(nums[i]<0){
          d=d+1;
        
      }
      else if(nums[i]==0){
         return 0;
      }
     
  }
   
    if(d%2==0){
        return 1;
    }
   return -1;

}
};