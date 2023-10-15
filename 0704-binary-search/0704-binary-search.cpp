class Solution {
public:
     
    int search(vector<int>& nums, int k) {
        
     int s =0,e=nums.size()-1;
     int m = s + (e-s)/2;
      while(s<=e){
        if(nums[m]==k) return m;
        else if(nums[m]<k) s = m+1;
        else e = m-1;
        m = s + (e-s)/2;
        
    }
    return -1;
    }
};