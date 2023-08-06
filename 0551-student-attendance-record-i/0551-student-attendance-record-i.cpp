class Solution {
public:
    bool checkRecord(string s) {
        int c=0,d=0,m1=0;
     for(int i=0;i<s.length();i++){
         if(s[i]=='A'){
             c++;
            }
         else if (s[i]=='L')
         {
             //d++;
             if(s[i+1]!='L'){
                 m1 = max(m1,d);
                d=0; 
             }
             else d++;
         }
        // else continue;
        
     } 
        m1 = max(m1,d);
         cout<<c<<m1<<endl;
        //if(m==0 && c>=2)
        if(c<2 && m1<2) return true;
        //else if(c<2 && m1==0) return 
        else return false;
    }
};