class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        map<int,int>mp;
        for(int i=0;i<=nums.size()-2;i++)
        {
          
           if( nums[i]==key)
           {
            mp[nums[i+1]]++;
           }
        }
        int maxi =INT_MIN;
        int target = 0;
        for(auto i:mp)
        {
            if(i.second>maxi)
            {
                maxi = i.second;
                target = i.first;
            }
        }
 return target;
    }
};