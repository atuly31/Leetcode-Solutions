class Solution {
public:
    static int minDifference(vector<int>& nums) {
        const int n=nums.size();
        if (n<=4) return 0;

        //nth_element & sort find 4 smallest elements
        nth_element(nums.begin(), nums.begin()+4, nums.end());
        vector<int> small(nums.begin(), nums.begin()+4);
        sort(small.begin(), small.end());

        //nth_element & sort find 4 biggest elements
        nth_element(nums.begin(), nums.begin()+4, nums.end(), greater<int>());
        vector<int> big(nums.begin(), nums.begin()+4);
        sort(big.begin(), big.end());

        // difference by considering 4 scenarios
        int min_diff=INT_MAX;
        for (int i=0; i<=3; ++i) 
            min_diff = min(min_diff, big[i]-small[i]);
        

        return min_diff;
    }
};





auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();