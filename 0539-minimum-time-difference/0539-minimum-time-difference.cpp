class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
       vector<int>mint;
        for(int i=0;i<timePoints.size();i++){
            string curr = timePoints[i];
          int hour = stoi(curr.substr(0,2));
          int mintues = stoi(curr.substr(3,2));
          int totalmint = hour*60 + mintues;
            mint.push_back(totalmint);
        }
        sort(mint.begin(),mint.end());
        int mini = INT_MAX;
        int diff;
        int n = mint.size();
        for(int i=0;i<n-1;i++){
          diff = mint[i+1]-mint[i];
           mini = min(diff,mini);
        }
        int lastdiff = (mint[0]+1440)-mint[n-1];
         mini = min(lastdiff,mini);
        return mini;
    }
};