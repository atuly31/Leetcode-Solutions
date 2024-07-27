class Solution {
public:
    int maxDepth(string s) {
        int max_depth = 0;
        stack<int>st;
        for(int i=0;i<s.size();i++)
        {
           if(s[i]=='(') 
                {
                    st.push(s[i]);
                    int x = st.size();
                    max_depth = max(max_depth,x);
                }
            else if (s[i]==')')
            { 
                if(!st.empty()) st.pop();
            }
        }
        int x = st.size();
        max_depth = max(max_depth,x);
        return max_depth;
    }
};