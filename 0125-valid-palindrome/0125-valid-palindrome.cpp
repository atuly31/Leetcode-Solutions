class Solution {
public:
    bool isPalindrome(string s) {
     string str = "",temp="";
     for(int i=0;i<s.length();i++){
         if((s[i] >='a' && s[i] <= 'z') || (s[i] >='0' && s[i] <= '9')){
           str.push_back(s[i]);
         }
         if(s[i]>='A'&& s[i]<='Z'){
          s[i]+=32;
          str.push_back(s[i]);
         }
         else{
          continue;
         }
         // cout<<str;
     }
    cout<<str;
    temp=str;
    reverse(temp.begin(),temp.end());
    if(str==temp){
        return true;
    }
    return false;
    }
};