class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        //dp with bfs
		int row=heights.size();
		int col=heights[0].size();
        //mtr is minimum effort to reach the cell
        vector<vector<int>>mtr(row,vector<int>(col,INT_MAX));
		mtr[0][0]=0;
        //effort to reach 0,0 is 0
		queue<pair<int,int>>q;//bfs
		q.push({0,0});
		int d[5]={0,-1,0,1,0};//direction techniue for updownleftright
		while(!q.empty())
		{
			pair<int,int>curr=q.front();
			q.pop();
			for(int i =0;i<4;i++)
			{
				int idx=curr.first+d[i]; //new x
				int idy=curr.second +d[i+1];//new y

				if(idx<0 or idy<0 or idy>=col or idx>=row) continue;//out f bound

				if(mtr[idx][idy]<=mtr[curr.first][curr.second]) continue;//effort to reach new x is already less //therefore it will be better if we reach new x , new y from previous path pnly.

				int x=max(mtr[ curr.first ][ curr.second ], abs(heights[idx][idy]-heights[curr.first][curr.second]));
//effort required will be effor required until now or this might ne highest effort cell pair in this path
				mtr[idx][idy]=min(x,mtr[idx][idy]);//store the min effort
				q.push({idx,idy});
			}

		}
		return mtr[row-1][col-1];
	}
};
