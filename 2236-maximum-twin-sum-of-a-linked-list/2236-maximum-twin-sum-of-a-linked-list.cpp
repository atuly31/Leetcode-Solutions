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
         int len =0;
         ListNode* temp= head;
         while(temp!=NULL){
             temp = temp->next;
             len++;
         }
         return len;
     }
    int pairSum(ListNode* head) {
        int len = getlen(head);
    ListNode* ptr = head;
    ListNode* right= NULL;
    while(ptr!=NULL){
        ListNode* temp = new ListNode(ptr->val);
        temp->next = right;
        right = temp;
        ptr = ptr->next;
    }
    int maxi = INT_MIN;
    int i = 0;
    while(i<=(len/2)-1){
        int sum = 0;
        sum = head->val + right->val;
        maxi = max(maxi,sum);
        head = head->next;
        right = right->next;
        i++;
    }  
    return maxi; 
    }
};