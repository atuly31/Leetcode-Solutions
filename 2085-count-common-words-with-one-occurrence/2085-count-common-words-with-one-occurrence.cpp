class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
     map<string,int>mp1,mp2; 
     int c=0;
         for(string i:words1) mp1[i]++;
         for(string i:words2) mp2[i]++;
       
      for(string i:words2){
         if(mp1[i]==1 && mp2[i]==1)
         {
             c++;
         }
         }
        return c;
    }
};




