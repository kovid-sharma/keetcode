// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    int findSubString(string str)
    {
            set<char> s ;
        
        for(int i=0 ; i<str.length() ; i++)
            s.insert(str[i]) ;
        unordered_map<char,int> m ;
        int i=0, j=i+1, n=s.size(), c=0 ;
        c++ ;
        int mini=INT_MAX ;
        m[str[i]]++ ;
        while(i<=j and j<str.length())
        {
            if(c<n)
            {
                if(m[str[j]]==0) c++ ;
                m[str[j]]++ ;
                j++ ;
            }
            
            while(c==n)
                {
                    mini=min(mini,j-i) ;
                    if(m[str[i]]==1) c-- ;
                    m[str[i]]-- ;
                    i++ ;
                }
            
        }
        
        return mini==INT_MAX ? 1 : mini ;
      
    }
};

// { Driver Code Starts.
// Driver code
int main() {
    int t;
    cin >> t;
    while (t--) {

        string str;
        cin >> str;
        Solution ob;
        cout << ob.findSubString(str) << endl;
    }
    return 0;
}  // } Driver Code Ends