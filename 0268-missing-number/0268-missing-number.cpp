class Solution {
public:
    int missingNumber(vector<int>& nums) {
    int sum =0,j=0;
    //int n = nums.size();
    for(int i=0;i<=nums.size()-1;i++){
        sum = sum+nums[i];
    }
     for(int i=0;i<=nums.size();i++){
        j=j+i;
    } 
        return (j-sum);
    }
};