class Solution {
public:
    int numDifferentIntegers(string word) {
        set<string> ans;
       
        for(int i=0;i<word.size();i++){
            if(isdigit(word[i])){
                 string str ="";
             while((i<word.size()) && word[i]=='0') i++;
             while((i<word.size()) && isdigit(word[i])){
                 str=str+word[i];
                 i++;
             }
             ans.insert(str);
            }
            
        }
        return ans.size();
    }
};