class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
    
     int i=0,j= nums.size()-1,c=0;
    sort(nums.begin(),nums.end());
    while(i<j){
        if(nums[i]+nums[j]<target){
            c=c+(j-i);
            i++;
        }
        else j--;
    }
        return c;
    }
};