class Solution {
public:
    void mergeSort(vector<int>& nums, int low, int mid, int high)
    {
        int left = low;
        int right = mid + 1;
        vector<int> ans;
        
        // Merging the two halves
        while(left <= mid && right <= high)
        {
            if(nums[left] <= nums[right])
            {
                ans.push_back(nums[left]);
                left++;
            }
            else
            {
                ans.push_back(nums[right]);
                right++;
            }
        }

        // Adding the remaining elements from the left half
        while(left <= mid)
        {
            ans.push_back(nums[left]);
            left++;
        }

        // Adding the remaining elements from the right half
        while(right <= high)
        {
            ans.push_back(nums[right]);
            right++;
        }

        // Copying the merged elements back into the original array
        for(int i = low; i <= high; i++)
        {
            nums[i] = ans[i - low];
        }
    }

    void merge(vector<int>& nums, int low, int high)
    {
        if(low >= high) return;
        int mid = (low + high) / 2;
        merge(nums, low, mid);
        merge(nums, mid + 1, high);
        mergeSort(nums, low, mid, high);
    }

    vector<int> sortArray(vector<int>& nums) 
    {
        int low = 0;
        int high = nums.size() - 1;
        merge(nums, low, high);
        return nums;
    }
};
