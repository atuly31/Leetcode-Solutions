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
    ListNode* reverse(ListNode* head){
        ListNode* prev=NULL;
        ListNode* temp;
        while(head!=NULL){
           temp=head->next;
           head->next=prev;
           prev=head;
            head=temp;
        }
        return prev;
    }
    ListNode* removeNodes(ListNode* head) {
        head= reverse(head);
        ListNode* temp= head;
       // ListNode* curr=temp->next;
        while(temp->next!=NULL){
            if(temp->next->val<temp->val){
                temp->next=temp->next->next;
            }
            else temp=temp->next;
        }
        return reverse(head);
       // return head;
    }
};