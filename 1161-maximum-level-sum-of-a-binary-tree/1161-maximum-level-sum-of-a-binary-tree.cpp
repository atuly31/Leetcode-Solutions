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
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        q.push(NULL);
        int sum =0;
        int largest = INT_MIN;
        int cnt = 0;
        int level =0;
        while(!q.empty())
        {
            TreeNode* Node = q.front();
            q.pop();

            if(Node==NULL)
            {
                cnt++;
                if(sum>largest)
                {
                    largest = sum;
                    level = cnt;
                }
                cout<<largest<<endl ;
                sum = 0;
                if(!q.empty()) q.push(NULL);
               
            }
            else 
            {
                sum += Node->val;
                if(Node->left !=NULL) q.push(Node->left);
                if(Node->right !=NULL) q.push(Node->right);
            }
        }
       
        return level;
    }
};