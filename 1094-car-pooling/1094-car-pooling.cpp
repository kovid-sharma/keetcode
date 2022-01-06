class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<int>arr(1001);
        for(int i=0;i<trips.size();i++)
        {
            for(int j=trips[i][1];j<trips[i][2];j++)
            {
                arr[j]+=trips[i][0];
                if(arr[j]>capacity)
                    return false;
            }
        }
        return true;
    }
};