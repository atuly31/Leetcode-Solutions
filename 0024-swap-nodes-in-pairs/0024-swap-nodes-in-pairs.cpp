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
    int getlen(ListNode* head){
        ListNode* temp=head;
        int len =0;
        while(temp!=NULL){
            temp=temp->next;
            len++;
        }
        return len;
    }
    ListNode* swapPairs(ListNode* head) {
        int len = getlen(head);
        int i=1;
        if(head==NULL) return NULL;
        if(len==1) return head;
        ListNode* temp=head, *curr=head->next;
        while(i<len){
            if(i>=(len-2)){ 
                swap(temp->val,curr->val);
            }
            else{
            swap(temp->val,curr->val);
            curr=curr->next->next;
            temp=temp->next->next;
            
            }
               i=i+2;
        }
        return head;
    }
};