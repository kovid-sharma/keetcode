class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<int>curr(2,-1);
        int ans=0;
        for(int i=0;i<intervals.size();i++)
        {
            if(intervals[i][0]>curr[0] and intervals[i][1]>curr[1])
            {
                ans++;
                curr[0]=intervals[i][0];
            }
            curr[1]=max(curr[1],intervals[i][1]);
        }
        return ans;
    }
};