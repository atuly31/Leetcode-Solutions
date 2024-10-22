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

    
    long long kthLargestLevelSum(TreeNode* root, int k) {
        queue<TreeNode*>q;
        q.push(root);
        q.push(NULL);
        long long largest_sum =0; 
        long long sum =0;
        vector<int>ans;
        while(!q.empty())
        {
            TreeNode* Node = q.front();
            q.pop();
           
            if(Node==NULL)
            {
                // if(sum>largest_sum) largest_sum = sum;
                ans.push_back(sum);
                sum = 0;
                if(!q.empty()) q.push(NULL);
            }
            else 
            {
                sum = sum + Node->val;
                if(Node->left!=NULL) q.push(Node->left);
                if(Node->right!=NULL) q.push(Node->right);
            }
        }
        auto comp = [] (int a, int b) {
        return a > b;
    };
       
        sort(ans.begin(),ans.end(),comp);
        return ans[k-1];
        
    }
};