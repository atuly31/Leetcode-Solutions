class Solution {
public:
    string removeOuterParentheses(string s) {
       string result;
        stack <char> st;
        for(int i:s)
        {
            if(i=='(')
            {
                if(!st.empty())
                {
                result.push_back(i);
                }
                st.push(i);
            }
            else{
                st.pop();
                if(!st.empty())
                {
                    result.push_back(i);
                }
            }
            
        }
        return result;
    }
};