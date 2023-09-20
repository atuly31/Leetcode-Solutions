class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
     
     int n=INT_MIN;
     map<int,int> m;
     for(auto i:nums){
         m[i]++;
         if(n<m[i]) n=m[i];
     }
     
     vector<vector<int>> ans;
        
     for(int i=0;i<n;i++){
         vector<int>s;
         for(auto j=m.begin();j!=m.end();j++){
           if(m[(j->first)]!=0) {
               s.push_back(j->first);
               m[(j->first)]--;
           }
             
         }
        ans.push_back(s); 
     }
        return ans;
    }
};