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
  ListNode* reverse(ListNode* head)
  {
      ListNode dummy = NULL;
      ListNode* prev;
     
      while(head)
      {
        ListNode* temp  = new ListNode(head->val);
        temp ->next = prev;
        prev = temp;
        head=head->next;
      } 
      
      return prev;
  }
 
    bool isPalindrome(ListNode* head) {
        ListNode*rev = reverse(head);
        
        

       
        while(head && rev)
        {
            if(head->val!=rev->val) return false;
            head = head->next;
            rev = rev->next;
        }
        return true;

    }
};