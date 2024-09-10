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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* temp = head;
        while(temp->next!=NULL)
        {
            int val = __gcd(temp->val,temp->next->val);
            ListNode * NewNode = new ListNode(val);
            NewNode->next = temp->next;
            temp->next = NewNode;
            temp = NewNode->next;
        }
        return head;
    }
};