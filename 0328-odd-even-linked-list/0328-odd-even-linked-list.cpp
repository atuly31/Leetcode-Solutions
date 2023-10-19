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
     
    ListNode* oddEvenList(ListNode* head) {
        ListNode* dummy = new ListNode(0);
        ListNode* dummy1 = new ListNode(0);
        ListNode* temp = dummy;
        ListNode* temp1 = dummy1;
        int index = 1;
        while(head){
            if(index % 2==1)
            {
            temp->next = new ListNode(head->val);
            temp = temp->next;
            }
            else 
            {
            temp1->next = new ListNode(head->val);
            temp1 = temp1->next;  
            }
            head = head->next;
            index++;
        }
            temp->next = dummy1->next;
            temp1->next = nullptr;
    
       return dummy->next;
    }
};