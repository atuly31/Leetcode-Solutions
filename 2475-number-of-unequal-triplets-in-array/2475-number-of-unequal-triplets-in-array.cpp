class Solution {
public:
    int unequalTriplets(vector<int>& arr) {
      int count = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            for (int j = i + 1; j < arr.size(); j++)
            {
                if (arr[i]!= arr[j])
                {
                    for (int k = j + 1; k < arr.size(); k++)
                    {
                        if ((arr[j] !=arr[k])and (arr[k]!=arr[i]))
                        {
                            count++;
                        }
                    }
                }
            }
        }
        return count;
    }   
    
};