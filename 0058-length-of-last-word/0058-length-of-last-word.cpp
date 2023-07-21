class Solution {
public:
    int lengthOfLastWord(string s) {
    vector<string> str;
      istringstream ss(s);  //Used Stringstream
      string word;
      while(ss >> word){
          //int index=word[word.length()-1];
          ///word.pop_back();  
          str.push_back(word);
      }

        int n = str.size()-1;
        string p=str[n];
        //cout<<p;
        return p.length();
    }
};