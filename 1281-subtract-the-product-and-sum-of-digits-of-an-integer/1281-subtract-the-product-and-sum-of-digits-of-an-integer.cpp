class Solution {
public:
    int subtractProductAndSum(int n) {
     int d;
     int m =1;
     int a=0;
        while(n){
            a=a+(n%10);
            m=m*(n%10);
            
            n=n/10;
            
        }
        cout<<a;
        cout<<m;
        return m-a;
    }
};