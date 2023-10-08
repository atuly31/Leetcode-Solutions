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
   
    ListNode* reverseList(ListNode* head) {
       ListNode* right = NULL;
       ListNode* left;
        while(head!=NULL){
            left=head->next;
            head->next=right;
            right=head;
            head=left;
        }
        return right;
    }
};