// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    vector<int> numAndDen(int n, int d) {
        // code here
        int up=-1;
        int down=1;
        for(int i=d+1;i<=10000;i++)
        {
            int x= (n*i)/d;
            if(__gcd(x,i)==1 and (double)x/i>(double)up/down)
            {
                up=x;
                down=i;
            }
        }
        return {up,down};
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,d;
        cin >> n >> d;
        Solution ob;
        vector<int>ans=ob.numAndDen(n,d);
        for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}
  // } Driver Code Ends