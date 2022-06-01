// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int a;
    int b;
    void dfs(int N,int &n,int s,int d,int help){
        if(N==0)
        return;
        dfs(N-1,n,s,help,d);
        n--;
        if(n==0)
        {
            a=s;
            b=d;
            return;
        }
        dfs(N-1,n,help,d,s);
        
    }
    vector<int> shiftPile(int N, int n){
        // code here
        dfs(N,n,1,3,2);
        return {a,b};
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, n;
        cin>>N>>n;
        
        Solution ob;
        vector<int> ans = ob.shiftPile(N, n);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}  // } Driver Code Ends