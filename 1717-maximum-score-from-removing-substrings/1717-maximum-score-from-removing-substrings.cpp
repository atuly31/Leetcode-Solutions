class Solution {
public:
    int maximumGain(string s, int x, int y) 
    {
        stack<char>st;
        int cnt =0;
        if(x<y)
        {
            for(int i=0;i<s.size();i++){
                if(st.empty()) st.push(s[i]);
                else if (st.top()=='b' && s[i]=='a')
                {
                     cnt+=y;
                     if(!st.empty()) st.pop();
                }
                else st.push(s[i]);
            }
            while(!st.empty())
            {
                char ch = st.top();
                st.pop();
                if(ch == 'b' && st.top()=='a')
                {
                    cnt+=x;
                    cout<<"hello";
                    if(!st.empty()) st.pop();
                }
            }
        }
        else 
        {
            for(int i=0;i<s.size();i++){
                if(st.empty()) st.push(s[i]);
                else if (st.top()=='a' && s[i]=='b')
                {
                     cnt+=x;
                     if(!st.empty()) st.pop();
                }
                else st.push(s[i]);
            }
            while(!st.empty())
            {
                char ch = st.top();
                st.pop();
                if(!st.empty()&& ch == 'a' && st.top()=='b')
                {
                    cnt+=y;
                    cout<<"hello";
                    // if(!st.empty()) st.pop();
                }
            }
        }
        return cnt;
    }
        
};