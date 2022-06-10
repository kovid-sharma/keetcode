// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int maxCoins(int A[], int B[], int T, int N) {
        // code here
        vector<pair<int,int>>ans;
        for(int i=0;i<N;i++)
        {
            ans.push_back({B[i],A[i]});
        }
        sort(ans.begin(),ans.end());
        int anns=0;
        int i=N-1;
        while(T>=0 and i>=0)
        {   
            if(T-ans[i].second>=0)
            anns+=(ans[i].first*ans[i].second);
            else
            {   
                anns+=ans[i].first*T;
               break; 
            }
            
            T-=ans[i].second;
            i--;
        }
        return anns;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int T,N;
        cin>>T>>N;
        
        int A[N], B[N];
        
        for(int i=0; i<N; i++)
            cin>>A[i];
        for(int i=0; i<N; i++)
            cin>>B[i];

        Solution ob;
        cout << ob.maxCoins(A,B,T,N) << endl;
    }
    return 0;
}  // } Driver Code Ends