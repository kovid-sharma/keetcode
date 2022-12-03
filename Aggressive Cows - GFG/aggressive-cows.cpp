//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
public:
    
    bool func(int mid,vector<int>&stalls,int k)
    {
        int i=1;
        int prev=stalls[0];
        k--;
        while(i<stalls.size())
        {
            if(k==0)
            return true;
            if(stalls[i]-prev>=mid)
            {
                prev=stalls[i];
                k--;
            }
            i++;
        }
        if(k==0)
        return true;
        return false;
    }
    int solve(int n, int k, vector<int> &stalls) {
    
        // Write your code here
        sort(stalls.begin(),stalls.end());
        int lo=1;
        int hi=1e9;
        int ans=0;
        while(lo<=hi)
        {
            int mid=lo+ (hi-lo)/2;
            
            
            if(func(mid,stalls,k))
            {
                ans=max(ans,mid);
                lo=mid+1;
            }
            else
            {
                hi=mid-1;
            }
            
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input

        int n, k;
        cin >> n >> k;

        vector<int> stalls(n);
        for (int i = 0; i < n; i++) {
            cin >> stalls[i];
        }
        // char ch;
        // cin >> ch;

        Solution obj;
        cout << obj.solve(n, k, stalls) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends