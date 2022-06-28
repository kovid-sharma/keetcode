// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  vector<int>dp;
    bool solve(vector<int>&arr,int i)
    {
        if(i>=arr.size()-1)
        {
            return true;
        }
        if(dp[i]!=-1)
        {
            if(dp[i])
            return true;
            else
            return false;
        }
        bool ans=false;
        for(int jump=1;jump<=arr[i];jump++)
        {
            ans= ans | solve(arr,i+jump);
            if(ans)
            {
                return dp[i]=ans;
            }
        }
        return dp[i]=ans;
    }
    int canReach(int A[], int N) {
        //for each index two possibilities
        
        vector<int>arr;
        dp.resize(N,-1);
        for(int i=0;i<N;i++)
        arr.push_back(A[i]);
        return solve(arr,0);
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        
        int A[N];
        
        for(int i=0; i<N; i++)
            cin>>A[i];

        Solution ob;
        cout << ob.canReach(A,N) << endl;
    }
    return 0;
}  // } Driver Code Ends