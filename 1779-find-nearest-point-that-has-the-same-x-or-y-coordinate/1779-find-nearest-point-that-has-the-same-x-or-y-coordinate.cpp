class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int mi=INT_MAX;
        int idx=-1;
        for(int i=0;i<points.size();i++)
        {
            if(points[i][0]==x or points[i][1]==y)
            {   
                int now= abs(x-points[i][0]);
                now+=abs(y-points[i][1]);
                if(mi>now)
                {
                    mi=now;
                    idx=i;
                }
            }
        }
        return idx;
    }
};