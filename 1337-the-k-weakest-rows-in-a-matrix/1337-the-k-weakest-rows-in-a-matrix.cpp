class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
    vector<int>v;
    int m = mat.size();
    set<pair<int,int> > s;
        for(int i=0;i<m;i++){
        int c= count(mat[i].begin(),mat[i].end(),1);
        s.insert({c,i});
               }
        for(auto i:s){
            if(k==0) break;
            else {
                v.push_back(i.second);
                k--;
            }
        }
         return v;
        }
     
    

};