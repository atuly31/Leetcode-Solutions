class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
     sort(nums.begin(),nums.end());
     int x = abs((nums[1]*nums[0])-(nums[nums.size()-1]*nums[nums.size()-2]));
        return x;
    }
};