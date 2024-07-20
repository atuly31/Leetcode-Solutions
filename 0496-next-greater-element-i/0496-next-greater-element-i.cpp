class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) 
    {
        vector<int>ans(nums1.size(),-1);
        for(int i=0;i<nums1.size();i++)
        {
            int val = nums1[i];
            for(int j=0;j<nums2.size()-1;j++)
            {
                  if(nums2[j]==val)
                  {
                     int idx = j;
                      if(nums2[j]>nums2[j+1]) break;
                      else 
                      {
                        while(idx!=nums2.size()-1)
                        if(nums2[idx]<nums2[idx+1]) 
                        {
                            ans[i] = nums2[idx+1];
                            break;
                        }
                        else idx++;
                      }
                  }
            }
        }
        return ans;
    }
};