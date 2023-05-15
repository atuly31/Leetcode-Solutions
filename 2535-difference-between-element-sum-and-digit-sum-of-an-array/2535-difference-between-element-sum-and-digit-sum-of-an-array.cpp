class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
       int c =0,d=0;

        for(int i=0;i<nums.size();i++){
            c = c+nums[i];
            if(nums[i]<9){
                d = d+nums[i];
            }
            else{
                int n = nums[i];
                while(n>0)
                {
                    d=d+n%10;
                    n=n/10;
                }
            }
        }

      return abs(c-d);  
    }
};