class Solution {
public:
    bool closeStrings(string word1, string word2) {
       unordered_map<char , int> m1 , m2;
       for(auto it : word1){
           m1[it]++;
       }  
       for(auto it : word2){
           if(m1.find(it)==m1.end()){
               return 0;
           }
           m2[it]++;
       }

       vector<int> one , two;
       for(auto it : m1){
           one.push_back(it.second);
       }
       for(auto it : m2){
           two.push_back(it.second);
       }
       sort(one.begin(),one.end());
       sort(two.begin(),two.end());
       return one==two;
       
    }
};