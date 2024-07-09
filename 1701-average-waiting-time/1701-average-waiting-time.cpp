class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& cust) 
    {
        double ans =0;
        int m = cust.size();
        // int n = cust[0].size();
        int time = 1;
        for(int i=0;i<m;i++)
        {
            int wait_time =0;
            if(time<cust[i][0]) time = cust[i][0];
            for(int j=0;j<1;j++)
            {
                time +=cust[i][1];
                cout<<time<<endl;
                wait_time = abs(cust[i][0]-time);
            }

            ans +=wait_time;
        }
        cout<<ans<<" "<<m;
        return ans/m;
    }
};