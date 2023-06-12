class Solution {
public:
    bool isSubsequence(string s, string t) {
        int m = s.length();
        int n = t.length();
        int i =0,j=0;
        for(i=0;i<n&&j<m;i++){
            if(s[j]==t[i]){
                j++;
            }

        }
        return(j==m);
    }  
};