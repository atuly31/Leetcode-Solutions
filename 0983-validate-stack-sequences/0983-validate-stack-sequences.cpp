class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
      stack<int> s1;
       int j=0;
       int i =0;
       s1.push(pushed[0]);
       while(i<pushed.size()){

            if(!s1.empty() && s1.top() == popped[j]){
              s1.pop();
              j++;
            }
             else {
                
                s1.push(pushed[i]);
                i++;
            }
      }
    
      while(j<popped.size()){
         if(!s1.empty() && s1.top() == popped[j]){
           s1.pop();
           j++;
         }
         else return false;
      }
      return true;
    }
};