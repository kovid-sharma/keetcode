// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
    public:
    
        int func(int mid)
        {
            int tmp=5;
            int ret=0;
            while(mid/tmp>=1)
            {
                ret+=mid/tmp;
                tmp*=5;
            }
            return ret;
        }
        int findNum(int n)
        {
            int ans=1e9;
            int low=5;//since  n minimum is 1
            int high=1e6;
            while(low<=high)
            {   
                int mid=(low+high)/2;
                int cntzero=func(mid);
                if(cntzero>=n)
                {
                    ans=min(ans,mid);
                    high=mid-1;
                }
                else
                low=mid+1;
            }
            return ans;
        }
};

// { Driver Code Starts.


int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        Solution ob;
        cout <<ob.findNum(n) << endl;
    }
return 0;
}  // } Driver Code Ends