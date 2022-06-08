class Solution {
public:
    bool solve(vector<int>&arr,int i,vector<bool>&vis)
    {
        if(i>=arr.size() or i<0)
            return false;
        if(vis[i]==true)
            return false;
        vis[i]=true;
        if(arr[i]==0)
            return true;
        return solve(arr,i+arr[i],vis) or solve(arr,i-arr[i],vis);
    }
    bool canReach(vector<int>& arr, int start) {
        //for every index from start choose only two options plus or minus.
        vector<bool>vis(arr.size(),false);
        return solve(arr,start,vis);
    }
};