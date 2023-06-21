class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
       int c=0,k=0;
        int n = nums.size()-1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]<=nums[i+1]){
                c=c+1;
            }
           if(nums[i]>=nums[i+1]) 
            {
                k=k+1;
            }
        }
      
        if(c==nums.size()-1 || k==nums.size()-1)
            return true;
        else{
            return false;
        }
    }
};