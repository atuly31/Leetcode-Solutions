class Solution {
public:
    string minRemoveToMakeValid(string s) {
    stack <int> st;
    for(int i=0;i<s.size();i++){
        if(!isalpha(s[i])){
            if(st.empty()) {
               st.push(i);
            }
            else if(s[st.top()] =='(' && s[i]==')'){
                st.pop();
                   } 
            else st.push(i);
        }
        
    }
         while(!st.empty()){
          int top = st.top();
          s.erase(s.begin()+top);
          st.pop();
        }
       
       
    return s;
    }
};