class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        string str;
        string ans;
        for(int i=0;i<words.size();i++){
            str=words[i];
            ans = ans+str[0];
        }
        if(ans.compare(s)==0) return true;
        else return false;
    }
};