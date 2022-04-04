class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int n=intervals.size();
        vector<vector<int>>merger;
        merger.push_back(intervals[0]);
        for(int i=1;i<n;i++)
        {
            vector<int>tmp=merger.back();
            if(tmp[1]>=intervals[i][0]){
                tmp[1]=max(tmp[1],intervals[i][1]);
                merger.pop_back();
                merger.push_back(tmp);
            }
            else{
                merger.push_back(intervals[i]);
            }
        }
        return merger;
    }
};