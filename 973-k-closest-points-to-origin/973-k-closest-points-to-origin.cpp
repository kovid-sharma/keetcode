class Solution {
public:
    static bool mycomp(tuple<int,int,int>&a,tuple<int,int,int>&b)
    {
        return get<2>(a)<get<2>(b);
    }
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<tuple<int,int,int>>x1x2sum;
        for(int i=0;i<points.size();i++)
        {
            int x1= points[i][0];
            int x2= points[i][1];
            int sum= (x1*x1)+(x2*x2);
            x1x2sum.push_back(make_tuple(x1,x2,sum));
        }
        sort(x1x2sum.begin(),x1x2sum.end(),mycomp);
        vector<vector<int>>ans;
        int i=0;
        while(k--)
        {
            ans.push_back({get<0>(x1x2sum[i]),get<1>(x1x2sum[i])});
            i++;
        }
        return ans;
    }
};