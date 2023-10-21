class Solution {
public:
    bool isValid(string s) {
    stack <char> str;

    for(int i=0;i<s.size();i++){
       
       if(s[i]=='(' || s[i] == '{' || s[i] == '[' ) 
       {
           str.push(s[i]);   
           
       }
       else {   
           if(!str.empty()){ 
              
              if(s[i]==')' && str.top()=='(')  str.pop();
                  
                
              else if(s[i]=='}' && str.top()=='{')  str.pop();
                  
              else if(s[i]==']' && str.top()=='[')  str.pop();
   
              else return  false;
                   
           }

           else  return false;
       }
       }
        
    
    if(str.empty()) return true; 
    else return false;   
    }
};