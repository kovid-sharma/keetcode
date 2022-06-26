// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
public:
    int countDistinctSubarray(int arr[], int n)
    {
        //code here.
        int i=0;
        int j=0;
        int cnt=0;
        unordered_set<int>st;
        for(int i=0;i<n;i++)
        {
            st.insert(arr[i]);
        }
        int num=st.size();
        int curr=0;
        unordered_map<int,int>sub;
        while(j<n)
        {   
            if(sub[arr[j]]++==0)
            curr++;
            while(curr==num)
            {   
                cnt+=n-j;
                sub[arr[i]]--;
                if(sub[arr[i]]==0)
                curr--;
                i++;
            }
            j++;
            
        }
        return cnt;
    }
};


// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution ob;	
		cout<<ob.countDistinctSubarray(a,n)<<endl;
	}
	return 0;
}  // } Driver Code Ends