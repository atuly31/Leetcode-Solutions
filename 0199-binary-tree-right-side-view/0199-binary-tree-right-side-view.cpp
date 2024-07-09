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
    vector<int> rightSideView(TreeNode* root) 
    {
        map<int,int>mp;
        vector<int>ans;
        if(root==NULL) return ans;
        queue<pair<TreeNode*,int>>q;
        q.push({root,0});
        while(!q.empty())
        {
            auto i = q.front();
            q.pop();
            TreeNode* temp = i.first;
            int x = i.second;
            mp[x]=temp->val;
            if(temp->left) q.push({temp->left,x+1});
            if(temp->right) q.push({temp->right,x+1});
        }
        
        for(auto i:mp)
        {
            if(i.first>=0) ans.push_back(i.second);
            
        }
        return ans;
    }
};