class Solution {
public:
    bool isNoAtk(int n,int j,int i,vector<string>&check)
    {
        int r=i;
        int c=j;
        while(i>=0 and j>=0)
        {
            if(check[i][j]=='Q')
                return false;
            i--;
            j--;
        }
        j=c-1;
        i=r;
        while(j>=0)
        {
            if(check[i][j]=='Q')
                return false;
            j--;
        }
        j=c-1;
        i=r+1;
        while(j>=0 and i<n)
        {
            if(check[i][j]=='Q')
                return false;
            j--;
            i++;
        }
        return true;
    }
    void colWise(vector<vector<string>>&ans,vector<string>&curr,int idReached,int n)
    {
        if(idReached==n)
        {
            ans.push_back(curr);
            return;
        }
        //for each row we have to check if it is possible to add in that row for id
        for(int row=0;row<n;row++)
        {   
            if(isNoAtk(n,idReached,row,curr))
            {
                curr[row][idReached]='Q';
                colWise(ans,curr,idReached+1,n);
                curr[row][idReached]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        
        //backtracking problem
        //n*n board
        string str(n,'.');
        vector<string>curr(n,str);
        vector<vector<string>>ans;
        colWise(ans,curr,0,n);
        
        //recurse starting from column 0;
        return ans;
    }
};