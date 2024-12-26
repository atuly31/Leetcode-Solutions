class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       
        int maxlen=0;
        if(s.size()==0) return 0;
        cout<<s.size();
        for(int i=0;i<=s.size()-1;i++)
         {
             vector<int>hash(256,-1);
            for(int j=i;j<=s.size()-1;j++)
            {
                if(hash[s[j]]==-1){
                    hash[s[j]]++;
                    maxlen = max(maxlen,j-i+1);
                }
                else break;
            }
         }
         return maxlen;
    }
};