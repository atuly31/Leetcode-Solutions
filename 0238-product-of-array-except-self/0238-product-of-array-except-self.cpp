class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
     vector<int>ans;
    int k,c=0;
    int mul=1;
    for(int i=0;i<nums.size();i++){
       if(nums[i]==0){
           c++;
       }
        else
        { mul=mul*nums[i];}
       
    }
        if(c==0){
            for(int i=0;i<nums.size();i++){
                ans.push_back(mul/nums[i]);
            }
            
        }
       else if(c==1)
        {
            for(int i=0;i<nums.size();i++){
                if(nums[i]==0)
                {
                     ans.push_back(mul);
                    continue;
                }
                ans.push_back(0);}
        }
     else {
        return vector<int>(size(nums));
    }
   
     return ans;
    
    }  
};