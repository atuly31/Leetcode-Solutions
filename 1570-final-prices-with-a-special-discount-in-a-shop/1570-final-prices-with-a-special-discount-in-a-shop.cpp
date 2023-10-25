class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
    stack<int> st;
    vector<int> ans(prices.size());
     for(int i=0;i<prices.size();i++){
        while(!st.empty() && prices[st.top()] >=prices[i]){
            int idx = st.top();
            ans[idx] = prices[idx] - prices[i];
            st.pop();
        }
        ans[i] = prices[i];
        st.push(i);
     }
     return ans;
    }
};