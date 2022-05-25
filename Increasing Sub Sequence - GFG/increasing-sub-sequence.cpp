// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int maxLength(string S)
    {
        // code here
        int cnt=0;
        string form;
        for(int i=0;i<S.size();i++)
        {
            if(form.empty()){
                cnt++;
                form.push_back(S[i]);
                continue;
            }
            if(form.back()>=S[i])
            {
                auto gre=lower_bound(form.begin(),form.end(),S[i])-form.begin();
                form[gre]=S[i];
            }
            else{
                cnt++;
                form.push_back(S[i]);
            }
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
        string S;
        cin>>S;
        Solution ob;
        cout << ob.maxLength(S) << endl;
    }
    return 0; 
}  // } Driver Code Ends