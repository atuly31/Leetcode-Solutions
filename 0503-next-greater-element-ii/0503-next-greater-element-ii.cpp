class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& vec) 
    {
        stack<int>st;
        vector<int>ans(vec.size(),-1);
        int n = vec.size();
        for(int i=2*vec.size()-1;i>=0;i--)
        {
            while(!st.empty() && st.top()<=vec[i%n]) 
            {
                st.pop();
            }
            if(st.empty()) ans[i%n]=-1;
            else ans[i%n] = st.top();
            st.push(vec[i%n]);
        }
        return ans;
        
    }
};