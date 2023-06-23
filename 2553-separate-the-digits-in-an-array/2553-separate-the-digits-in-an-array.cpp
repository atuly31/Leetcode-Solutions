class Solution {
public:
   
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<=9){
              ans.push_back(nums[i]);
            }
            else{
                int num = nums[i];
                 int j=0;
                     while(num!=0){
                        int d = num%10;
                        num = num/10;
                        j++;
                        ans.push_back(d);
                         }
                        int n=ans.size()-j;
                    reverse(ans.begin()+n,ans.end());
    
                }
        }
        return ans;
        
    }
};