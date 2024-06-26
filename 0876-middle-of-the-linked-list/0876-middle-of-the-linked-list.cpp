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
   int length(ListNode* head)
   {
      int i=0;
      ListNode* temp = head;
      while(temp)
      {
         temp = temp->next;
         i++;
      }
      return i;
   }
    ListNode* middleNode(ListNode* head) {
       int len =  length(head);
       int mid = len/2;
       ListNode* curr = head;
      while(mid!=0)
        {
        curr = curr->next;
        mid--;
         }
       head = curr;
       
       
       return head;
    }
};