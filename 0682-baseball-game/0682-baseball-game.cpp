class Solution {
public:
    int calPoints(vector<string>& op) {
      stack <int> s;

      for(int i=0;i<op.size();i++){
          if(s.empty()) s.push(stoi(op[i]));
          else {
              if(op[i] =="C") s.pop();
              else if (op[i]=="D") s.push(2*s.top());
              else if (op[i]=="+") {
                  int y = s.top();
                  s.pop();
                  int x = s.top();
                  s.push(y);
                  s.push(x+y);
              }
              else {
                  s.push(stoi(op[i]));
              }
          }
      }
      int sum =0;
      while(!s.empty()){
          sum = sum + s.top();
          s.pop();
      }
      return sum;
    }
};