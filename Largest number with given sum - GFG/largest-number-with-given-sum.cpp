// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Function to return Largest Number

class Solution
{
    public:
    //Function to return the largest possible number of n digits
    //with sum equal to given sum.
    string con(vector<char>arr)
    {
        string trmp;
        for(auto it:arr)
        trmp.push_back(it);
        return trmp;
    }
    string largestNumber(int n, int sum)
    {
        // Your code here
        vector<char>str(n,'0');
        if(sum==0)
        return con(str);
        int mSum=n*9;
        if(mSum<sum)
        return "-1";
        int till=sum/9;
        for(int i=0;i<till;i++)
        {
            str[i]='9';
        }
        int last= sum%9;
        str[till]=last+'0';
        return con(str);
    }
};

// { Driver Code Starts.
int main()
{
    //taking testcases
	int t;
	cin>>t;

	while(t--)
	{
	    //taking n and sum
		int n,sum;
		cin>>n>>sum;
		
        Solution obj;
        //function call
		cout<<obj.largestNumber(n, sum)<<endl;
	}
	return 0;
}  // } Driver Code Ends