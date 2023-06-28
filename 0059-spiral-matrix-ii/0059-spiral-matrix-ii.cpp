class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
     vector<vector<int>> ans(n,vector<int>(n));
        int sr=0;
        int sc=0;
        int er=n-1;
        int ec =n-1;
        int c=1;
        while(sr<=er && sc<=ec){
        for(int i=sc;i<=ec;i++ ){
          ans[sr][i]= c;
            c++;
        }
        sr++;
    for(int i=sr;i<=er;i++ ){
          ans[i][ec]= c;
            c++;
        }
        ec--;
    for(int i=ec;i>=sc;i-- ){
          ans[er][i]= c;
            c++;
        }
        er--;
      for(int i=er;i>=sr;i-- ){
          ans[i][sc]= c;
            c++;
        }
        sc++; 
    }
        return ans;
    }
};