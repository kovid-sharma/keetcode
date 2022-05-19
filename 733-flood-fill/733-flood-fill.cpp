class Solution {
public:
    void dfs(vector<vector<int>>& image, int i, int j, int nr,int pr)
    {
        if(i<0 or j<0 or i>=image.size() or j>=image[0].size() or image[i][j]==nr)
            return;
        
        if(image[i][j]==pr)
        {   image[i][j]=nr;
            dfs(image,i+1,j,nr,pr);
            dfs(image,i,j-1,nr,pr);
            dfs(image,i,j+1,nr,pr);
            dfs(image,i-1,j,nr,pr);
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        dfs(image,sr,sc,newColor,image[sr][sc]);
        return image;
    }
};