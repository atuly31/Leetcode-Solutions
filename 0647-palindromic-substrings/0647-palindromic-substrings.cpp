class Solution {
public:
        int palindromicstr(string s, int i,int j){
        int c=0;
        while(i>=0 && j<s.length()&& s[i]==s[j]){
            c++;
            i--;
            j++;
        }
        return c;
    }
    int countSubstrings(string s) {
      int n = s.length();
      int c =0;
     for(int i=0;i<n;i++){
         int odd = palindromicstr(s,i,i);
         c = c+odd;
         int even = palindromicstr(s,i,i+1);
          c = c+even; 
     }
        return c;
    }
    

};