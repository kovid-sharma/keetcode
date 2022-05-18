// { Driver Code Starts
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    int transform (string A, string B)
    {
        //code here.
        unordered_map<char,int>mp;
        for(auto ch:A)
        mp[ch]++;
        for(auto ch:B)
        mp[ch]--;
        for(auto it:mp)
        if(it.second!=0)
        return -1;
        int l1=A.size()-1;
        int l2=B.size()-1;
        if(l1!=l2)
        return -1;
        while(l1>=0)
        {
            if(A[l1]==B[l2])
            {
               l1--;
               l2--;
            }
            else
            {
                l1--;
            }
        }
        return l2+1;
    }
};


// { Driver Code Starts.

int main () 
{
    int t; cin >> t;
    while (t--)
    {
        string A, B; 
        cin >> A >> B;
        Solution ob;
        cout <<ob.transform (A, B) << endl;
    }
}  // } Driver Code Ends