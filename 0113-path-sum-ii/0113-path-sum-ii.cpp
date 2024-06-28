/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
     void sum(vector<vector<int>>& ans,vector<int> temp,TreeNode* root,int targetSum)
     {
        
        if(root==NULL) return;
        targetSum-=root->val;
        temp.push_back(root->val);
        if(targetSum==0 && root->left==NULL && root->right==NULL)
        {
            ans.push_back(temp);
            return;
        }
       sum(ans,temp,root->left,targetSum);
       sum(ans,temp,root->right,targetSum);
       temp.pop_back();
        
     }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) 
    {
        vector<vector<int>>ans;
        vector<int> temp;
       // if(targetSum<0) abs(targetSum);
        sum(ans,temp,root,targetSum);
        return ans;
    }
};