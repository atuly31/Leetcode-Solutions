class Solution {
public:
    string interpret(string command) {
       int i=0;
      string ans;
     while(i<command.length()){
          if(command[i]=='(' && command[i+1]==')'){
            ans =ans+ "o";
              i=i+2;
              
          }
          else if(command[i]=='(' && command[i+1]=='a'){
              ans=ans+"al";
              i=i+4;
          }
         else{
             ans= ans+'G';
             i++;
         }
                  

                  }
        return ans;   
    }
};