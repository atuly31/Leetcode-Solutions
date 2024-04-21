class Solution {
public:
    string removeOccurrences(string s, string part) {
        
       while(s.find(part) != string ::npos){
        size_t  idx = s.find(part);
        int n = part.size();
        s.erase(idx,n);
       } 
       return s;
    }
};