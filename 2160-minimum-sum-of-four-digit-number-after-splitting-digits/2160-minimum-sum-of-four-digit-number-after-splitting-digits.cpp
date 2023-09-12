class Solution {
public:
    int minimumSum(int num) {
      int arr[4];
      int i=0;
      while(num>0 && i<4){
          int res = num%10;
          arr[i]=res;
          num=num/10;
          i++;
      }
   sort(arr,arr+4);
        int n1=arr[0]*10+arr[2];
        int n2 = arr[1]*10+arr[3];
        
        return n1+n2;
    }
};