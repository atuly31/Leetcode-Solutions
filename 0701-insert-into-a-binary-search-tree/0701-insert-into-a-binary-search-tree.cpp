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
  void insert(TreeNode* &temp,int key)
  {
     if(temp->left==NULL && temp->val>key)
     {
        temp->left = new TreeNode(key) ;
        return ;
     }  
     
     if(temp->right==NULL && temp->val<key) 
     {
        temp->right = new TreeNode(key);
        return ;
     }
     if(temp->val>key) insert(temp->left,key);
     else insert(temp->right,key);
  }
    TreeNode* insertIntoBST(TreeNode* root, int val) 
    {
        if(root==NULL)
        {
            root =  new TreeNode(val) ;
            return root;
        }
        TreeNode* temp = root;
        insert(temp,val);
        return root;
    }
};