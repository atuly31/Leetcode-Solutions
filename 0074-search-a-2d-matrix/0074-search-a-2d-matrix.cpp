class Solution {
public:
   bool binary_search(vector<int>&vec,int s,int e,int key)
   {
        while(s<e)
        {
            int mid = s+e/2;
            if(vec[mid]==key) return true;
            else if(vec[mid]<key) s=mid+1;
            else e = mid-1;
        }
        return false;
   }
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int n = mat.size();
        int m = mat[0].size();
        bool ans;
        for(int i=0;i<n;i++)
        {
            if(target<=mat[i][m-1])
            {
                ans=  binary_search(mat[i],0,m-1,target);
                break;
            }
        }
        return ans;
    }
};