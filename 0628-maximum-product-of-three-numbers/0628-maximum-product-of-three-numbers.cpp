class Solution {
public:
    int maximumProduct(vector<int>& nums) {
     sort(nums.begin(),nums.end());
        int p1=1,p2=1;
        p1=nums[nums.size()-1]*nums[nums.size()-2]*nums[nums.size()-3];
        p2=nums[nums.size()-1]*nums[0]*nums[1];
        return max(p1,p2);
    }
};