/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>>ans(m,vector<int>(n,-1));
        int sr = 0,sc =0,er = m-1,ec=n-1;
        int c=0;
        int ele = m*n;
        ListNode*temp = head;
        while(c<ele && temp!=NULL)
        {
            for(int i =sc;i<=ec&& c<ele ; i++)
            {
                if(temp==NULL) break;
                ans[sr][i]=temp->val;
                c++;
                temp = temp->next;
            }
            sr++;
             for(int i =sr;i<=er&& c<ele ; i++)
            {
                if(temp==NULL) break;
                ans[i][ec]=temp->val;
                c++;
                temp = temp->next;
            }
            ec--;
             for(int i =ec;i>=sc&& c<ele ; i--)
            {
                if(temp==NULL) break;
                ans[er][i]=temp->val;
                c++;
                temp = temp->next;
            }
            er--;
              for(int i =er;i>=sr&& c<ele ; i--)
            {
                if(temp==NULL) break;
                ans[i][sc]=temp->val;
                c++;
                temp = temp->next;
            }
            sc++;
        }
        return ans;
    }
};