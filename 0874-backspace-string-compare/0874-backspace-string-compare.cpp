class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack <char> st1;
        stack <char> st2;
        for(int i=0;i<s.size();i++){
            if(s[i]!='#') st1.push(s[i]);
            else {
                if(!st1.empty() && s[i]=='#'){
                    st1.pop();
                }
            }
        }
        for(int i=0;i<t.size();i++){
            if(t[i]!='#') st2.push(t[i]);
            else {
                if(!st2.empty() && t[i]=='#'){
                    st2.pop();
                }
            }
        }
        string ans1;
        string ans2;
        while(!st1.empty()){
            ans1 = ans1+ st1.top();
            st1.pop();
        }
        reverse(ans1.begin(),ans1.end());
        // cout<<ans1<<endl;

        while(!st2.empty()){
            ans2 = ans2 + st2.top();
            st2.pop();
        }
        reverse(ans2.begin(),ans2.end());
        // cout<<ans2<<endl;
        if(ans1.compare(ans2)==0) return true;
        else return false;
      
    }
};