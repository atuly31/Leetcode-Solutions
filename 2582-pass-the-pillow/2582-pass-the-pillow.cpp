class Solution {
public:
    int passThePillow(int n, int time) 
    {
        int fs = 1;
        int flag = 0;
        int i =0;
        if(time<n) return time+1;
        else
        {
            i = i+n;
            time = time-n;
            flag =1;
            // cout<<i<<" "<<time<<"flag 0"<<endl;
           while(time!=0)
         {
           if(flag == 0)
           {
            if(time<n)
            {
               i = i+time;
               time =0;
            }
            else
            {
               i = i+n;
              time = time -n;
            }
             flag =1;
             cout<<i<<" "<<time<<"flag 0"<<endl;
           }
           else 
           {
            if(time<n)
            {
                i = i-time;
                time = 0;
            }
            else 
            {
               i = i-(n-1);
               time = time -(n-1);
            }
            cout<<i<<" "<<time<<"flag 1"<<endl;
            
            flag =0;
           }
         }
        }
        cout<<i<<" "<<time<<" "<<flag<<endl;
        if(flag==0 || i==n) return i-1;
        // else if (i==n) return i-1;
        return i+1;
        
    }
};