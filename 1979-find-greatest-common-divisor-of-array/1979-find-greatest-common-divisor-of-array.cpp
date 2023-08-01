class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int s = nums[0];
        int e = nums[nums.size()-1];
        int ans = gcd(s,e);
        return ans;
    }
};