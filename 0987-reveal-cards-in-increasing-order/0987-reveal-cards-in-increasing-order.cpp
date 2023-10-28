class Solution {
public:
    queue<int>q;
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
    sort(deck.begin(),deck.end());
     for(int i=0;i<deck.size();i++){
         q.push(i);
     }   
    vector<int>ans(deck.size());
    for(int i=0;i<deck.size();i++){
        ans[q.front()] = deck[i];
        q.pop();
        q.push(q.front());
        q.pop();
     } 
     return ans;
    }
};