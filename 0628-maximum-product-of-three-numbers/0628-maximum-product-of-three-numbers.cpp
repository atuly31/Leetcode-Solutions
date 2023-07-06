class Solution {
public:
    int maximumProduct(vector<int>& nums) {
     sort(nums.begin(),nums.end());
        int p1=1,p2=1;
        for(int i= nums.size()-3;i<nums.size();i++){
            p1=p1*nums[i];
        }
        p2=nums[nums.size()-1]*nums[0]*nums[1];
        return max(p1,p2);
    }
};