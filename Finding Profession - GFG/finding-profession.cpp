// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    char solve(int l,int p)
    {
        if(l==1)
        {
            return 'e';
        }
        if(p==1)
        return 'e';
        if(p%2==0)
        {
            return solve(l-1,p/2)=='e'?'d':'e';
        }
        else
        {
           return solve(l-1,(p+1)/2)=='e'?'e':'d';
        }
    }
    char profession(int level, int pos){
        // code here
        return solve(level,pos);
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int level, pos;
        cin>>level>>pos;
        
        Solution ob;
        if(ob.profession(level, pos) == 'd')
            cout<<"Doctor\n";
        else
            cout<<"Engineer\n";
    }
    return 0;
}  // } Driver Code Ends