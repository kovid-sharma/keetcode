class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int total=points.size();
        sort(points.begin(),points.end());
        int prev=points[total-1][0];
        for(int i=points.size()-1;i>=0;i--)
        {
            if(points[i][1]<prev)
            {
                prev=points[i][0];
            }
            else
            {
                total--;
            }
        }
        return total+1;
        
        
    }
};