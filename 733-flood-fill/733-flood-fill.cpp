class Solution {
public:
    int row,col,nya,paint;
    void dfsfill(int idx,int idy,vector<vector<int>>&image,vector<vector<bool>>&visited)
    {
        if(idx<0 or idy<0 or idx>=row or idy>=col or visited[idx][idy]==true or image[idx][idy]!=paint)
            return;
        
        
        visited[idx][idy]=true;
        image[idx][idy]=nya;
        dfsfill(idx+1,idy,image,visited);
        dfsfill(idx-1,idy,image,visited);
         dfsfill(idx,idy+1,image,visited);
         dfsfill(idx,idy-1,image,visited);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        row=image.size();
        col=image[0].size();
        paint=image[sr][sc];
        nya=newColor;
        vector<vector<bool>>visited(row,vector<bool>(col,false));
        dfsfill(sr,sc,image,visited);
        return image;
    }
};