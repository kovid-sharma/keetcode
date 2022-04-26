class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        int cost=0;
        //min spanning algo prims
        int n= points.size(); //total points
        vector<bool>counted(n,false);
        int total=0;
        priority_queue<pair<int,int>>pq;//stores value of cost and neg to make it min heap
        int st=0;
        counted[st]=true;
        while(total<n-1)//total connections to be made are n-1 in spanning tree
        {
            
            for(int idx=0;idx<n;idx++)  //travelling to each eleemtn and checking distance
                if(counted[idx]==false)
                {
                    pq.push({-(abs(points[st][0]-points[idx][0])+ abs(points[st][1]-points[idx][1])),idx});//for //current value of st indexx
                }
            while(counted[pq.top().second]==true)
                pq.pop();
            st=pq.top().second;
            counted[st]=true;
            total++;
            //counted[st]=true;
            cost+=pq.top().first;
            pq.pop();
                            
        }
        return -1*cost;
    }
};
