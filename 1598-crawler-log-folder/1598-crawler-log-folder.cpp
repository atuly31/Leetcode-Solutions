class Solution {
public:
    int minOperations(vector<string>& logs) 
    {
        stack<string>st;
        int cnt =0;
        for(int i=0;i<logs.size();i++)
        {
            if(logs[i]=="../")
            {
                if(!st.empty()) st.pop();
            }
            else if(logs[i]=="./");
            else 
            {
                st.push(logs[i]);
               
            }
        }
    
        return st.size();
    }
};