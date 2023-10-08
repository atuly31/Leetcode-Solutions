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
        ListNode* temp =head;
        while(temp!=NULL){
            temp=temp->next;
            len++;
        }
        return len;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int m = getlength(head);
        // if(head==NULL) return NULL;
        // if(m==1 && n==1) return NULL;
        if(m==n) return head->next;
        int i=1;
        ListNode* prev =head;
        while(i<(m-n)){
          prev=prev->next;
            i++;
        }
         
         prev->next=prev->next->next;
        
          return head;
        
    }
};