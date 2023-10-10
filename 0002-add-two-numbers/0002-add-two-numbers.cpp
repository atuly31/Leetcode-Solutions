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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
      ListNode dummy = ListNode(0);
        ListNode * temp = &dummy;
        int car =0;

        while(l1!=NULL || l2!=NULL)
        {
            if (l1!=NULL)
            {
                 car += l1->val;
                 l1 = l1->next;
            }
            if (l2!=NULL)
            {
                 car += l2->val;
                 l2 = l2->next;
            }

            temp = temp->next = new ListNode(car%10);
            car /= 10;
        }

        if(car==1) temp->next = new ListNode(1);

        return dummy.next;

    }
};