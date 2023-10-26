class CustomStack {
public:
    stack<int> s;
     int size;
    CustomStack(int maxSize) {
      size = maxSize;   
    }
    
    void push(int x) {
     if(s.size()==size) return;
     s.push(x);   
    }
    
    int pop() {
        if(!s.empty()){
        int top = s.top();
         s.pop();
        return top;
            
        }
        else return -1;
        
    }
    
    void increment(int k, int val) {
    
       stack<int> temp;
        while(!s.empty()){
           temp.push(s.top());
           s.pop();
           }

       while(!temp.empty()&& k>0){
           int top = temp.top()+val;
           temp.pop();
           s.push(top);
           k--;
       }

       while(!temp.empty()){
           s.push(temp.top());
           temp.pop();
       }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */