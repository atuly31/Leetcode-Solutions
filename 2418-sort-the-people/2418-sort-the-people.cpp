class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        map<int ,string>mp;
        for(int i=0;i<names.size();i++)
        {
            mp[heights[i]] = names[i];
        }
       sort(heights.begin(), heights.end(), greater<int>());
       for(int i=0;i<names.size();i++)
       {
          names[i] = mp[heights[i]];
       }
       return names;
    }
};