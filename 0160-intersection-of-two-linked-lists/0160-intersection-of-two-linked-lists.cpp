/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    int getlen(ListNode* head){
        int len =0;
        ListNode* temp = head;
        while(temp!=NULL){
            temp=temp->next;
            len++;
        }
        return len;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode * headB) {
        int m1= getlen(headA);
        int m2 = getlen(headB);
        int d = abs(m1-m2);
        if(m1>m2){
            
            for(int i=1;i<=d;i++){
                headA=headA->next;
            }
        }
        else{
            for(int i=1;i<=d;i++){
                headB=headB->next;
            }
        }
        
        while(headA!=NULL && headB!=NULL){
            if(headA==headB) 
                return headA;

            headA=headA->next;
            headB=headB->next;  
           
        }
        return NULL;
    }
};