class Solution {
public:
    bool digitCount(string num) {
      unordered_map<char, int>mp;
        for(int i=0;i<num.size();i++)
            mp[num[i]]++;
        for(int i=0; i<num.size(); i++)
        {
            char c=i+'0';
            if(mp[c]!=num[i]-'0')
                return false;
        }
        
        return true;
    }
};