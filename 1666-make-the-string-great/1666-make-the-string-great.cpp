class Solution {
public:
    string makeGood(string s) {
     stack<char> st;
     string str = "";
     for(int i =0;i<s.size();i++){
         if(st.empty()) st.push(s[i]);
         else {
             char ch = st.top();
             if(ch-s[i] == 32 ) st.pop();
             else if (ch - s[i]==-32) st.pop();
             else st.push(s[i]);
         }
     }  
     cout<<st.size(); 
     while(!st.empty()){
      str = str + st.top();
      st.pop();
     }
     reverse(str.begin(),str.end());
     return str;
    }
};