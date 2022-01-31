class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        //recur
        int m=INT_MIN;
       for(int i=0;i<grid.size();i++)
       {
           for(int j=0;j<grid[0].size();j++)
           {
               if(grid[i][j]==1)
               {
                   m= max(area(i,j,grid),m);
               }
           }
       }
        return max(m,0);
    }
    int area(int x,int y,vector<vector<int>>& matrix)
    {
        if(x>=0 and x<matrix.size() and y>=0 and y<matrix[0].size())
        {
        if(matrix[x][y]==1)
        {   
            matrix[x][y]=0;
            return 1 + area(x-1,y,matrix) +area(x+1,y,matrix) + area(x,y-1,matrix) +                area(x,y+1,matrix);
        
        }
            
        }
        return 0;
    }
    
};