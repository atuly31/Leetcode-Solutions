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
    int getlength(ListNode* &head){
        int len =0;
        ListNode* temp = head;
        while(temp!=NULL){
            temp=temp->next;
            len++;
        }
        return len;
    }
    ListNode* deleteMiddle(ListNode* head) {
         if (head == NULL) {
          return NULL;
           }
       if (head->next == NULL) {
          delete head;
          return NULL;
       }
        
        int len = getlength(head);
        
        int i=1;
        ListNode* prev=head;
        while(i<len/2){
            prev = prev->next;
            i++;
         }
         ListNode* curr=prev->next;
         prev->next=curr->next;
         curr->next=NULL;
         delete curr;
        
        return head;
        
    }
};