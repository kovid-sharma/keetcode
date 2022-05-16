// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int longSubarrWthSumDivByK(int arr[], int n, int k)
	{
	    // Complete the function
	    vector<int>ids(k,INT_MAX);
	    long long sum=0;
	    ids[0]=-1;
	    int ans=0;
	    for(int i=0;i<n;i++)
	    arr[i]%=k;
	    for(int i=0;i<n;i++)
	    {
	        sum=(sum+arr[i])%k;
	        if(sum<0)sum+=k;
	        if(ids[sum]==INT_MAX)
	        ids[sum]=i;
	        else
	        ans=max(i-ids[sum],ans);
	    }
	    return ans;
	}
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,k,i;
	cin>>n>>k; int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	Solution ob;
	cout<<ob.longSubarrWthSumDivByK(arr, n, k)<<"\n";
	}
	return 0;	 
}
  // } Driver Code Ends