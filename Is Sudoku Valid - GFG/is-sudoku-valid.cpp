// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    bool valiDate(int X,int Y,vector<vector<int>>&mat,char curr){
        for(int i=0;i<9;i++)
        {
            if(X!=i and mat[i][Y]==curr)
            {
                return false;
            }
        }
        for(int j=0;j<9;j++)
        {
            if(Y!=j and mat[X][j]==curr)
            {
                return false;
            }
        }
        int xSub=X-X%3;
        int ySub=Y-Y%3;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                if(i+xSub!=X and j+ySub!=Y)
                {
                    if(mat[i+xSub][j+ySub]==curr)
                    {
                        return false;
                    }
                }
            }
        }
        return true;
    }
    int isValid(vector<vector<int>> mat){
        // code here
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(mat[i][j]!=0)
                {
                    if(!valiDate(i,j,mat,mat[i][j]))
                    {
                        return 0;
                    }
                }
            }
        }
        
        return 1;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        vector<vector<int>> mat(9, vector<int>(9, 0));
        for(int i = 0;i < 81;i++)
            cin>>mat[i/9][i%9];
        
        Solution ob;
        cout<<ob.isValid(mat)<<"\n";
    }
    return 0;
}  // } Driver Code Ends