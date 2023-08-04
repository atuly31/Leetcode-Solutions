class Solution {
public:
    string truncateSentence(string s, int k) {
     //vector<string>ans;
        string str;
        int c=0;
      for(int i=0;i<s.length() && c<k;i++){
          if(s[i]==' ')
          {
              c++;
             }
          if(c==k){
              s.erase(s.begin()+i,s.end());
      }
      }
        return s;
    }
};