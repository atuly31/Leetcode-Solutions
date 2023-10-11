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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
     ListNode* prev = list1, * end=list1;
        int i =1;
        while(i<=a-1){
           prev=prev->next; 
            i++;
        }
        int j =0;
        while(j<b){
           end=end->next; 
            j++;
        }
        prev->next=list2;
        while(list2->next!=NULL){
            list2=list2->next;
        }
        list2->next=end->next;
        return list1;
    }
};