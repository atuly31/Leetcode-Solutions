class Solution {
public:
    int pivot(vector<int>& nums)
    {
        int i =0,j=nums.size()-1;
        while(i<j)
        {
            int mid = (i+j)/2;
            if(nums[0]<=nums[mid]) i = mid+1;
            else j = mid;
        }
        return j;
    }

    int binary_search(vector<int>& arr, int target,int i,int j)
    {
       int ans =-1;
      
        while(i<=j)
        {
            int mid = (i+j)/2;
            if(arr[mid]==target) 
            {
                ans = mid;
                return ans;
            }
            else if(arr[mid]>target) j = mid-1;
            else i = mid+1;
        }
        return ans;
    }
    int search(vector<int>& nums, int target) 
    {
        int piv = pivot(nums);
        if(nums.size() == 1 && nums[0] == target){
            return 0 ;
        }
        else if(nums.size() == 1 && nums[0] != target){
            return -1;
        }
        if(target>=nums[0])
        {
            return binary_search(nums,target,0,piv-1);
           
        } 
        else 
        {
          return  binary_search(nums,target,piv,nums.size()-1);
        }
        
    }
};