class Solution {
public:

int cal(vector<int>nums,int k)
{
        int l=0,r=0,odd=0,cnt=0;
        while(r<nums.size())
        {
           if(nums[r]%2!=0) odd++;
           while(odd>k)
           {
            if(nums[l]%2!=0) 
            {
                l++;
                odd--;
            }
            
            else l++;
           }
           cnt +=r-l+1;
            r++;
        }
        return cnt;
}
    int numberOfSubarrays(vector<int>& nums, int k) {

        int x = cal(nums,k);
        int y = cal(nums,k-1);

        return abs(x-y);

}
        
        
    
};