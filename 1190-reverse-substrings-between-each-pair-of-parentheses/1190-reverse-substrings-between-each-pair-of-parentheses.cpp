class Solution {
public:
    string reverseParentheses(string s) 
    {
        stack<char> st;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
               st.push(s[i]);
            }
            else if(s[i]==')')
            {
                string rev ="";
                while(st.top()!='(')
                {
                    rev+=st.top();
                    st.pop();
                }
                cout<<st.top()<<endl;
                st.pop();
                for(int i=0;i<rev.size();i++) st.push(rev[i]);
            }
            else st.push(s[i]);
        }

        string ans;
        while(!st.empty())
        {
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};