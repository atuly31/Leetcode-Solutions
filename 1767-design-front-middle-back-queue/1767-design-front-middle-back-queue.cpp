class FrontMiddleBackQueue {
public: 
    deque<int> dq;
    FrontMiddleBackQueue() {
      // arr = new int[] 
    }
    
    void pushFront(int val) {
       dq.push_front(val); 
    }
    
    void pushMiddle(int val) {
        int mid = dq.size()/2;
        dq.insert(dq.begin()+mid,val);
    }
    
    void pushBack(int val) {
      dq.push_back(val);  
    }
    
    int popFront() {
        if(dq.size()==0) return -1;
        int val = dq.front();
        dq.pop_front();
        return val;
    }
    
    int popMiddle() {
       if(dq.size()==0) return -1;
       int mid = dq.size()/2;
       if(dq.size()%2==0) {
           mid--;
       } 
       auto it = dq.begin();
       it = it + mid;
       int k = *it;
       dq.erase(dq.begin()+mid);
       return k;
    }
    
    int popBack() {
      if(dq.size()==0) return -1;
      int val = dq.back();
      dq.pop_back();
      return val;  
    }
};

/**
 * Your FrontMiddleBackQueue object will be instantiated and called as such:
 * FrontMiddleBackQueue* obj = new FrontMiddleBackQueue();
 * obj->pushFront(val);
 * obj->pushMiddle(val);
 * obj->pushBack(val);
 * int param_4 = obj->popFront();
 * int param_5 = obj->popMiddle();
 * int param_6 = obj->popBack();
 */