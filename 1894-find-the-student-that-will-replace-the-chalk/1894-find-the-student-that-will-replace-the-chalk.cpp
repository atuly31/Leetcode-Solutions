class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        int sum =0;
        int i = 0;
        int n = chalk.size();
        for(int i=0;i<n;i++)
        {
            sum+=chalk[i];
        }
        // int rem =0;
        // while(k)
        // {
        //     k=k/sum;
            int rem = k%sum;
       
        cout<<rem;
        while(rem>=chalk[(i%n)])
        {
            rem -=chalk[(i%n)];
            i++;
        }
        return i%n;
    }
};