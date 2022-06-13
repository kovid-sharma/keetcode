// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
		
	int isRepeat(string s)
	{
	    // Your code goes here
	    int n=s.size();
	    int st=0;
	    for(int len=1;len<=n/2;len++)
	    {   
	        if(n%len!=0)
	        continue;
	        
	        string sub= s.substr(st,len);
	        int times= n/len;
	        string cmp;
	        while(times--)
	        cmp+=sub;
	        if(cmp==s)
	        return 1;
	        
	    }
	    return 0;
	}
};

// { Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string str;
   		cin >> str;
        Solution ob;
   		cout << ob.isRepeat(str) << "\n";
   	}

    return 0;
}  // } Driver Code Ends