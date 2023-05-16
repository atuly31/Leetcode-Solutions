class Solution {
public:
    bool search(vector<int>& nums, int target) {
int s=0;
        int e=nums.size()-1;
        int mid=s+ (e-s)/2;
        while(s<=e){
             if( nums[s]==target || nums[mid]==target||nums[e]==target){
                return true;
                
            }   
           
           else if(nums[mid]<target ){
                e--;
            } 
            else if( nums[mid]>target  ){
                s++;e--;
            }
                        
             mid=(s+e)/2;
        } 
    return false;
    }
};