class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        
        vector<vector<int>> ans;
        ans.push_back(intervals[0]);
        int indx=0;
        for(int i=0;i<intervals.size()-1;i++)
        {
            if(ans[indx][1]<intervals[i+1][0])
            {
                ans.push_back(intervals[i+1]);
                indx++;
            }
            else    //overlap
            {
                ans[indx][1]=max(intervals[i+1][1],ans[indx][1]);
            }
        }
        return ans;
    }
};