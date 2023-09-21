class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
     map<int,int>m;
     set<int>s;
     for(auto i:arr){
         m[i]++;
     }
     for(auto&p:m){
         s.insert(p.second);
     }
     return m.size()==s.size();
    }
};