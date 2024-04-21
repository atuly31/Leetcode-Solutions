class Solution {
public:

void remove_rec(string &s, string part,int n)
{
      if(s.find(part) == std::string ::npos) return ;
        
        size_t  idx = s.find(part);
        s.erase(idx,n);

        remove_rec(s,part,n);
}
    string removeOccurrences(string s, string part) {
        
       
        int n = part.size();
        remove_rec(s,part,n);
       
       return s;
    }
};