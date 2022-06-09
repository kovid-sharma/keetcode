// { Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to merge two nodes a and b.
   int find(int par[], int c){
    if(par[c] == c)
        return c ;
    return par[c] = find(par,par[c]) ;
}

void union_( int a, int b, int par[], int rank1[]){
    int p1 = find(par,a) ;
    int p2 = find(par,b) ;
    if(rank1[p1] > rank1[p2])
        par[p2] = p1 ;
    else if(rank1[p1] < rank1[p2])
        par[p1] = p2 ;
    else{
        par[p1] = p2 ;
        rank1[p2]++ ;
    }
}

bool isConnected(int x,int y, int par[], int rank1[]){
    return find(par,x) == find(par,y) ;
}
};

// { Driver Code Starts.

int main() {
    //taking number of testcases
    int t;
    cin>>t;
    while(t--) {
        
        //taking number of elements
        int n;
        cin>>n;
        
        
        int par[n+1];
        int rank1[n+1];

        //initializing the parent and
        //the rank array
        for(int i=1; i<=n; i++) {
            par[i] = i;
            rank1[i] = 1;
    }
    
    //taking number of queries
    Solution obj;
    int q;
    cin>>q;
    while(q--) {    
        int a,b;
        char c;
        cin>>c>>a>>b;
        
        //if query type is 'U'
        //then calling union_ method
        if(c=='U')
        {
            obj.union_(a,b, par, rank1);
        }
        else//else calling isConnected() method
        cout<<obj.isConnected(a,b, par, rank1)<<endl;
    }
    }
    return 0;
}
  // } Driver Code Ends