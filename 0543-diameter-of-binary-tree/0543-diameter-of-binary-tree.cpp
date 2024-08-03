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
    int ans=0;
    int height(TreeNode* root)
    {
        if(root==NULL) return 0;
        int left = height(root->left);
        int right = height(root->right);
        return max(left,right)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) 
    {
        if(root==NULL) return 0;
        int left = height(root->left);
        int right= height(root->right);
        int sum = left+right;
        int ldia = diameterOfBinaryTree(root->left);
        int ridia = diameterOfBinaryTree(root->right);
       
        return max(sum,max(ldia,ridia));
    }
};