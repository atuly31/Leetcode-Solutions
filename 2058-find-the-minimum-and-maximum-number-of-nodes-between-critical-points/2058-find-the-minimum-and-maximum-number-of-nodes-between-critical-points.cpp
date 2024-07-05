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
   
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int>ans = {-1,-1};
        if(head==NULL) return ans;
        ListNode* temp = head->next;
        if(temp==NULL) return ans;
        if(temp->next == NULL) return ans;
        ListNode* prev = head;
        int i=2;
        int mini = INT_MAX;
        int first = -1;
        int last = -1; 
        while(temp->next){
          if(((temp->val > temp->next->val && temp->val > prev->val) || (temp->val <     temp->next->val && temp->val < prev->val)) && first==-1){
              
              first = i;
              last = i;
          }
          else if((temp->val > temp->next->val && temp->val > prev->val) || (temp->val <     temp->next->val && temp->val < prev->val)){
              mini = min(mini,i-last);
              last = i;
          }
          i++;
          temp= temp->next;
          prev = prev->next;
        }
        cout<<last;
        if(first == last) return ans;
        else {
            ans[0] = mini;
            ans[1]= last - first;
        }
        return ans;
    }
};