class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) 
    {
        int ls =0,rs=0;
        for(int i=0;i<k;i++)
        {
          ls+=cardPoints[i];
        }
       
        int maxpoints = ls;
        int idx = cardPoints.size()-1;
        for(int i=k-1;i>=0;i--)
        {
            ls = ls-cardPoints[i];
            rs =rs+cardPoints[idx];
            maxpoints = max(maxpoints,ls+rs);
            idx--;
        }
        return maxpoints;
    }
};