class Solution {
public:
    int minAddToMakeValid(string s) {
     stack<char> s1;
     int c =0,d;
     for(int i=0;i<s.size();i++){
         if(s[i] == '(') {
               s1.push(s[i]);
         }
         else {
             if(s1.empty() == false){
                s1.pop();
                d++;
             }
             else c++ ;
         }
     }
     d = s1.size();
     return c+d;
        
    }
};