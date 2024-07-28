class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_sum = nums[0];
    int curr_sum = nums[0];
    for (int i = 1; i < nums.size(); i++) {
        curr_sum = max(nums[i], curr_sum + nums[i]);
        max_sum = max(max_sum, curr_sum);
    }
    return max_sum;
    }
};