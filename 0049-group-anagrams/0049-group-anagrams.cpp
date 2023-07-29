class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
      map<string, vector<string> >mp; 
     for( auto i:strs){
         string str = i;
         sort(str.begin(),str.end());
         mp[str].push_back(i);
     }
        vector<vector<string>> ans;
      for(auto i=mp.begin();i!=mp.end();i++){
          ans.push_back(i->second);
      } 
        return ans;
    }
};