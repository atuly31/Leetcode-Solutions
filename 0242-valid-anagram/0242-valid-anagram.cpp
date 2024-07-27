class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        int hash[256]={0};
        for(int i=0;i<s.size();i++)
        {
            hash[s[i]]++;
        }
        for(int i=0;i<t.size();i++)
        {
            hash[t[i]]--;
        }
        for(int i=0;i<s.size();i++)
        {
           if(hash[s[i]]!=0) return false;
        }
        return true;
    }
};