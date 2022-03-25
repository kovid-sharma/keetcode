class Solution {
public:
   static bool mycomp(vector<int>a,vector<int>b){
        int asave= a[1]-a[0];
        int bsave= b[1]-b[0];
        return asave>bsave;
        
    }
    int twoCitySchedCost(vector<vector<int>>& costs) {
        sort(costs.begin(),costs.end(),mycomp);
        int n= costs.size()/2;
        int ans=0;
        for(int i=0;i<n;i++){
            ans+=(costs[i][0]);
        }
        for(int i=n;i<2*n;i++){
            ans+=(costs[i][1]);
        }
        return ans;
    }
};