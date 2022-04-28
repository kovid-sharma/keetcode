class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
		int row=heights.size();
		int col=heights[0].size();
        vector<vector<int>>mtr(row,vector<int>(col,INT_MAX));
		mtr[0][0]=0;
		queue<pair<int,int>>q;
		q.push({0,0});
		int d[5]={0,-1,0,1,0};
		while(!q.empty())
		{
			pair<int,int>curr=q.front();
			q.pop();
			for(int i =0;i<4;i++)
			{
				int idx=curr.first+d[i];
				int idy=curr.second +d[i+1];

				if(idx<0 or idy<0 or idy>=col or idx>=row) continue;

				if(mtr[idx][idy]<=mtr[curr.first][curr.second]) continue;

				int x=max(mtr[ curr.first ][ curr.second ], abs(heights[idx][idy]-heights[curr.first][curr.second]));
				mtr[idx][idy]=min(x,mtr[idx][idy]);
				q.push({idx,idy});
			}

		}
		return mtr[row-1][col-1];
	}
};
