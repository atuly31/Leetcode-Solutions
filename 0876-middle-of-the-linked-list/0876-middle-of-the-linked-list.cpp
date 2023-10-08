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
    ListNode* temp= head;
    while(temp!=NULL){
      temp = temp->next;
      len++;
    }
    return len;
    }
    ListNode* middleNode(ListNode* head) {
        int len  = getlength(head);
         if(len==1)  return head;
        
            int m = len/2;
            ListNode* temp=head;
            int i=1;
            while(i<m){
            temp=temp->next; 
                i++;
            }
            head = temp->next ;
            
           return head;
        }
        
};