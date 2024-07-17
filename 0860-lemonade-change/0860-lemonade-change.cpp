class Solution {
public:
    bool lemonadeChange(vector<int>& bills) 
    {
        int i=0;
        int five=0,ten =0;
        while(i<bills.size())
        {
          if(bills[i]==5) five++;
          else if(bills[i]==10)
          {
            
            if(five>0){
                five--;
                ten++;
            }
            
            else return false;

          }
          else {
            if(ten>0 && five>0)
            {
                ten--;
                five--;
            }
            else if(five>=3) five-=3;
            else return false;
          }
          i++;
        }
        return true;
    }
};