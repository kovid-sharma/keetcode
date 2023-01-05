//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
bool findd(vector<string> &w,string x,map<string,int>&mp)
{
    for(int i=1;i<=x.size();i++)
    {
        if(mp.find(x.substr(0,i))==mp.end())return false;
    }return true;
}
    string longestString(vector<string> &wrds)
    {
        sort(wrds.begin(),wrds.end());
        string ans;
        map<string,int>mp;
        for(auto it:wrds)mp[it]++;
        for(int i=0;i<wrds.size();i++)
        {   
            if(ans.size()<wrds[i].size()){
            if(findd(wrds,wrds[i],mp))
            ans=wrds[i];
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<string> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        Solution obj;
        string w = obj.longestString(v);
        cout << w << "\n";
    }
    return 0;
}

// } Driver Code Ends