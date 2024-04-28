class Solution {
public:
    int numberOfSubstrings(string s) {
       int cnt=0;
       int l=0,r=0;
       map<char,int> mpp;
       while(r<s.size())
       {
        string str ="";
        mpp[s[r]]++;
        
        while(mpp.size()>=3)
        {
            
            cnt = cnt + s.size()-r;
            
            mpp[s[l]]--;
            if(mpp[s[l]]==0) mpp.erase(s[l]);
            l++;
        }
       
       r++;
       }
        return cnt;
        
    }
};