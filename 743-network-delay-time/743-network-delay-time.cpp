class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<int>disSt(n,INT_MAX);
        disSt[k-1]=0;
        int cp=n;
        while(n--)
        {   
            bool see=false;
            for(auto it:times)
            {
                int src=it[0];
                int des=it[1];
                int wei=it[2];
                if(disSt[src-1]!=INT_MAX and disSt[src-1]+wei<disSt[des-1]){
                    disSt[des-1]=disSt[src-1]+wei;
                    see=true;
                }
            }
            if(see==false)
                break;
        }
        int maxWei=0;
        for(int i=0;i<cp;i++)
            maxWei=max(maxWei,disSt[i]);
        if(maxWei==INT_MAX)
            return -1;
        return maxWei;
    }
};