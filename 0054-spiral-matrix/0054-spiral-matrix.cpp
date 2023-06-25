class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
    vector<int>ans;
    int m = matrix.size();
    int n= matrix[0].size();
    int element= m*n;
    int sr =0;
    int ec = n-1;
    int er = m-1;
    int sc = 0;
    int c=0;
     while(c<element){
       for(int i=sc;i<=ec && c<element;i++){
           ans.push_back(matrix[sr][i]);
           c++;
       }
         sr++;
       for(int i=sr;i<=er && c<element;i++ ){
           ans.push_back(matrix[i][ec]);
           c++;
       } 
         ec--;
      for(int i=ec;i>=sc  && c<element;i--){
           ans.push_back(matrix[er][i]);
            c++;
       } 
         er--;
      for(int i=er;i>=sr && c<element;i--  ){
           ans.push_back(matrix[i][sc]);
          c++;
       } 
         sc++;
     }
    return ans;
    }
};