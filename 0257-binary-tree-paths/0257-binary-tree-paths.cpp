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
    void path(vector<string>& str,TreeNode* root,string ptr)
    {
        if(root==NULL) return;
        int i = root->val;
        int p = i;
         i = abs(i);
        string ch = to_string(i);
        cout<<ch<<" "<<i<<" "<<p<<endl;
        if(root->left ==NULL && root->right==NULL)
        {
            if(p<0) ptr +='-'+ch;
            else ptr += ch;
            str.push_back(ptr);
            return;
        }
        if(p<0) ptr = ptr + '-'+ ch + "->";
        else ptr = ptr + ch + "->";
        path(str,root->left,ptr);
        path(str,root->right,ptr);
    }
    vector<string> binaryTreePaths(TreeNode* root) 
    {
     vector<string>str;
     string ptr ="";
     path(str,root,ptr);
     return str;
         
    } 
};