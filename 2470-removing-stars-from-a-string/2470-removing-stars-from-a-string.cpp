class Solution {
public:
    string removeStars(string s) {
    //int n = ;
     stack <char> st;
     string str ="";
     for(int i= 0; i<s.size(); i++)
     {
        
         if(s[i] !='*'){
           
          st.push(s[i]);
   
         }
         else if(s[i]=='*' && !st.empty()){
         
          st.pop();
         
         }
     }  
     while(!st.empty()){
       
        str += st.top();
        st.pop();
     }
     reverse(str.begin(),str.end());
     return str;
     }
   
     
    
};