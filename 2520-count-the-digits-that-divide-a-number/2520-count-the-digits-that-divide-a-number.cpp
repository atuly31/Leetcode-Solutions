class Solution {
public:
    int countDigits(int num) {
       int c=0;
       int n = num;
        while(num){
            int d=num%10;
            if(n%d==0) c++ ;
             num=num/10;
            
        }
        return c;
    }
};