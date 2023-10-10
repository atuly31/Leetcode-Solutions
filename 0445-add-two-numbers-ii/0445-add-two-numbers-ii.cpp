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
    
    ListNode* reverse(ListNode* &head){
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
        
     ListNode* add_two_nums(ListNode* l1,ListNode* l2){
        ListNode* dummy = new ListNode(0);
        ListNode* temp = dummy;
        int sum =0;
         while(l1!=NULL || l2!=NULL) {
            if(l1!=NULL){
                sum = sum+l1->val;
                l1=l1->next;
            }
            if(l2!=NULL){
                sum = sum+l2->val;
                l2=l2->next;  
            }
            temp->next = new ListNode(sum%10);
            temp = temp->next;
            sum=sum/10;
         }
         if(sum==1) temp->next=new ListNode(1);
         return dummy->next;
        
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1= reverse(l1);
        l2= reverse(l2);
        ListNode* l3 = add_two_nums(l1,l2);
        return reverse(l3);
        
    }
};