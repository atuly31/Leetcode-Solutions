class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
      //  vector<int>ans;
        int c=0;
        //sort(nums.begin(),nums.end());
        int sum=*max_element(nums.begin(), nums.end());
        //ans.push_back(sum);
        for(int i=sum;i<sum+k;i++){
            c = c+i;
        }
         
       return c; 
    }
};