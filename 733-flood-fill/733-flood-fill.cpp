class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        //bfs easy
        int coltosee=image[sr][sc];
        if(newColor==image[sr][sc])
            return image;
        queue<pair<int,int>>q;
        q.push({sr,sc});
        vector<int>dir={0,-1,0,1,0};
        while(!q.empty())
        {
            pair<int,int>now=q.front();
            q.pop();
            image[now.first][now.second]=newColor;
            for(int i=0;i<4;i++)
            {
                int xpos=now.first+dir[i];
                int ypos=now.second+dir[i+1];
                if(xpos<0 or ypos<0 or xpos>=image.size() or ypos>=image[0].size())
                    continue;
                if(image[xpos][ypos]==coltosee)
                {
                    q.push({xpos,ypos});
                }
            }
        }
        return image;
    }
};