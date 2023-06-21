class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
       int c=0,d=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]<=nums[i+1]){
                c=c+1;
            }
        }
       for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>=nums[i+1]){
                d=d+1;
            }
        }  
        if(c==nums.size()-1 || d==nums.size()-1)
            return true;
        else{
            return false;
        }

    }
};