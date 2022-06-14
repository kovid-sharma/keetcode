// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
    public:
    int count(int mid)
    {
        int cnt=0;
        while(mid>=5)
        {
            cnt+=mid/5;
            mid/=5;
        }
        return cnt;
    }
        int findNum(int n)
        {
        //complete the function here
        
        
        int low=5;
        int high=1e5;
        int ans=1e5;
        while(low<=high)
        {
            int mid= (low+high)/2;
            if(count(mid)>=n)
            {   
                ans=min(ans,mid);
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
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