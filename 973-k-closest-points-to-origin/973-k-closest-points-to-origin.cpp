class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,pair<int,int>>>pq;
        for(int i=0;i<points.size();i++)
        {
            int a= points[i][0];
            int b=points[i][1];
            int add= a*a + b*b;
            pair<int,pair<int,int>> topush;
            topush.first=-1*add;
            topush.second.first=a;
            topush.second.second=b;
            pq.push(topush);
        }
        vector<vector<int>>ans;
        while(k--)
        {
            ans.push_back({pq.top().second.first,pq.top().second.second});
            pq.pop();
        }return ans;
    }
};