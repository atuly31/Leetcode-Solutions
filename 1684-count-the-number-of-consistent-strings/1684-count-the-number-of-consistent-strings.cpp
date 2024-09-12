class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int ans =0;
        map<char,int>map;
        for(int i=0;i<allowed.size();i++)
        {
            map[allowed[i]]++;
        }

        for(int i=0;i<words.size();i++)
        {
            string word = words[i];
            for(auto i:word)
            {
                if(map.find(i)==map.end()) 
                {
                    ans = ans -1;
                    break;
                }
            } 
            ans++;
            
        }
        return ans;
    }
};