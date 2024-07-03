class Solution {
public:
    int hammingWeight(int n) 
    {
        vector<int>vec;
        while(n>0)
        {
            vec.push_back(n%2);
            n=n/2;
        }
        reverse(vec.begin(),vec.end());
        int cnt =0;
        for(int i=0;i<vec.size();i++)
        {
           if(vec[i]==1) cnt++;
        }
        return cnt;
    }
};