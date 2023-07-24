class Solution {
public:
    bool detectCapitalUse(string word) {
        int c=0;
        int d=0;
     if(isupper(word[0])){
            d=d+1; 
         }
     for(int i=1;i<word.length();i++){
        
         if(isupper(word[i])){
             c = c+1;
         }
     }
       if((c+d)==word.length() || c==0)
        return true;
    return false;
    }
};