class Solution {
public:
    string mergeAlternately(string word1, string word2) {
     int c = word1.length();
     int d = word2.length();
     int n = min(c,d);
     string s ="";

     for(int i=0;i<n;i++){
      s = s + word1[i]+word2[i];
     }
     if  (c>d){
     string p = word1.substr(n,c);
         s.append(p);
     }
     else 
     {
         string p = word2.substr(n,d);
         s.append(p);
     } 
       
        return s;
    }
};