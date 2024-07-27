class Solution {
public:
    int maxDepth(string s) {
        int max_depth = 0;
        int cnt 0;
        for(int i=0;i<s.size();i++)
        {
           if(s[i]=='(') cnt++;
           else if(s[i]==')') cnt--;
           max_depth = max(max_depth,cnt);
        }
       
        
        return max_depth;
    }
};