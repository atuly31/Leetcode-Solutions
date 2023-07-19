class Solution {
public:
    bool checkpalin(string str ){
        //int s = 0;
        string temp ="";
        temp = str;
        reverse(temp.begin(),temp.end());
            if(temp==str){
              return true;
            }
        return false;
        
}
    string firstPalindrome(vector<string>& words) {
//string s ="";
     for(int i=0;i<words.size();i++){
       //bool a= checkpalin(words[i]);
         if(checkpalin(words[i])){
          return words[i];
         }
     }
    return "";
    }
};