// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    long long countKdivPairs(int A[], int n, int K)
    {
        //code here
        long long cnt=0;
        for(int i=0;i<n;i++)
        {
            A[i]%=K;
        }
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
        {
           if(mp.find(K-A[i])!=mp.end())
           {
               cnt+=(mp[K-A[i]]);
           }
           mp[A[i]]++;
        }
        return cnt+mp[0]*(mp[0]-1)/2;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;

		int a[n];
		for (int i = 0; i < n; i++)
			cin >> a[i];

		int k;
		cin >> k;

        Solution ob;
		cout << ob. countKdivPairs(a, n , k) << "\n";



	}


	return 0;
}
  // } Driver Code Ends