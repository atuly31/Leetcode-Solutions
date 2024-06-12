class Solution {
public:
    void sortColors(vector<int>& nums) 
    {
        int l=0,m=0,h=nums.size()-1;
        while(m<=h)
        {
            if(arr[m]==0) swap(arr[l++],arr[m++]);
            else if(arr[m]==1) m++
            else swap(arr[m],arr[h--])

        }
    }
};