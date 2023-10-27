class BrowserHistory {
public:
    stack <string> st;
    stack <string> temp;
    //string str; 
    BrowserHistory(string homepage) {
        st.push(homepage);
    }
    
    void visit(string url) {
    while(!temp.empty()) temp.pop();
     
    st.push(url);
    
        
    }
    
    string back(int steps) {
         string ans;
        while(steps && !st.empty()){
            ans = st.top();
            temp.push(ans);
            st.pop();
            steps--;
           
        }
       if(!st.empty()) return st.top();
       else {
           st.push(ans);
           temp.pop();
           return ans;
       }
     
    }
    
    string forward(int steps) {
        while(steps && !temp.empty()){
            st.push(temp.top());
            temp.pop();
            steps--;
        }
        return st.top();
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */