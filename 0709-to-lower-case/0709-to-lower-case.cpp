class Solution {
public:
    string toLowerCase(string s) {
     // string p="";
      for(int i=0;i<s.length();i++){
         if(s[i]>=65 && s[i]<=90){
             s[i]=s[i]+32;
             // p.push_back(s[i]);
      }
         
      }
        return s;
    }
};