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
  ListNode *reverse(ListNode* head)
  {
    
    ListNode* prev = NULL; // Initialize prev to NULL
    ListNode* curr;
    
    while(head) {
        curr = head->next;  // Store the next node
        head->next = prev;  // Reverse the current node's pointer
        prev = head;        // Move prev to the current node
        head = curr;        // Move head to the next node (originally stored in curr)
    }
    
    return prev; 
  }
 
    bool isPalindrome(ListNode* head) {
        if (!head || !head->next) return true;
        ListNode*slow = head;
        ListNode *fast = head;
        while(fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode*rev = reverse(slow);
        // while(rev)
        // {
        //     cout<<rev->val;
        //      rev = rev->next;
        // }
        ListNode* firstHalf = head;
        while(rev)
        {
            if( firstHalf->val!=rev->val) return false;
             firstHalf = firstHalf->next;
            rev = rev->next;
        }
        return true;
    }
};