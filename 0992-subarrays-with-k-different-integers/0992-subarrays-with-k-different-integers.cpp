class Solution {
public:
   int cal(vector<int> &nums,int k)
   {
    int l=0,r=0,subarr=0;
        int n = nums.size();
        unordered_map<int,int> hash;
        int cnt=0;
        while(r<nums.size())
        {
           
            hash[nums[r]]++;
           if(hash[nums[r]] == 1)  cnt++;
           
           while(cnt>k) 
           {
            hash[nums[l]]--;
            if( hash[nums[l]]==0){
            hash.erase(nums[l]);
            cnt--;
            }  
            l++;
            
            }
              
            subarr +=r-l+1;   
            r++;
            }
        return subarr;
   }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        int x = cal(nums,k);
        int y = cal(nums,k-1);
        cout<<x<<endl;
        cout<<y<<endl;
        return x-y;
        
    }
};