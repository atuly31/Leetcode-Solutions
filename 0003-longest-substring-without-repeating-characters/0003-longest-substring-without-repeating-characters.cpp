class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    vector<int> hash (256,-1);
    int l =0 ,r=0,maxlen=0;
  
    while(r<s.size())
    {
        
        if(hash[s[r]]!=-1 )
        {
           l = max(hash[s[r]]+1,l); 
           
        }
      
        hash[s[r]]=r;
        
       
        
        maxlen = max(maxlen,r-l+1);
        
        r++;
    }
    return maxlen;
    }
};