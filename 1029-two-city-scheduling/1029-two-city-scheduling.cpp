bool mycomp(vector<int>a,vector<int>b){
        return (a[1]-a[0])>(b[1]-b[0]);
    }
class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        sort(costs.begin(),costs.end(),mycomp);
        int n= costs.size()/2;
        int ans=0;
        for(int i=0;i<n;i++){
            ans+=costs[i][0];
            ans+=costs[i+n][1];
        }
        return ans;
    }
};