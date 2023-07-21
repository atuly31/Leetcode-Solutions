class Solution {
public:
    string reverseOnlyLetters(string s) {
    int i=0;
    int j = s.size()-1;
    while(i<j){
        
     if((s[i]>=65&& s[i]<=90 || s[i]>=97&& s[i]<=122) && (s[j]>=65&& s[j]<=90 || s[j]>=97&& s[j]<=122)){
         swap(s[i],s[j]);
         i++;
         j--;
     }
    else if(!isalpha(s[i])&& !isalpha(s[j])){
         i++;
         j--;
     }
    
        else if(s[i]>=65&& s[i]<=90 ||  (s[i]>=97&& s[i]<=122)){
            j--;
           
        }
         
         else{
            i++;
         }
     }
        return s;
    }
};