class Solution {
public:
    string reverseWords(string s) {
    vector<string> str;
    string p ="";
        istringstream ss(s);
        
            string word;
            while(ss>>word){
             str.push_back(word);
            }
    
     //sort(str.begin(),str.end());
       for(int i=str.size()-1;i>=0;i--){
          if(i!=0){
          p=p+str[i]+" ";
           }
           else{
             p=p+str[i];   
           }
       }
        return p;
    }
};