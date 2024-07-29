class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int pos=0,neg=0;
        vector<int>vec(nums.size());
        for(int i=0;i<nums.size();i++)
        {
            if(i%2==0)
            {
                while(nums[pos]<0 && pos<nums.size()) pos++;
                vec[i] = nums[pos];
                pos++;
            }
            else 
            {
                while(nums[neg]>=0 && neg<nums.size()) neg++;
                vec[i] = nums[neg];
                neg++;
            }
        }
        return vec;
    }
};