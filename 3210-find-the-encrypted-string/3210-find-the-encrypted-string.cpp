class Solution {
public:
    string getEncryptedString(string s, int k) 
    {
        int i=0;
        if(k==s.size()) return s;
        k = k%s.size();
        cout<<k;
        while(i<s.size())
        {
            swap(s[i],s[k]);
            i++;
        }
        return s;
    }
};