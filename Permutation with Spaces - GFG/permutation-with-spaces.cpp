// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
public:
    void rec(vector<string>&ans,string S,string tmp,int i)
    {
        if(i==S.size())
        {   
            if(tmp.back()==' ')
            return;
            ans.push_back(tmp);
            return;
        }
        tmp.push_back(S[i]);
        tmp.push_back(' ');
        rec(ans,S,tmp,i+1);
        tmp.pop_back();
        rec(ans,S,tmp,i+1);
    }
    vector<string> permutation(string S){
        // Code Here
        vector<string>ans;
        string tmp;
        // tmp.push_back(S[0]);
        rec(ans,S,tmp,0);
        sort(ans.begin(),ans.end());
        return ans;
    }
};

// { Driver Code Starts.

int  main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        vector<string> ans;
        Solution obj;
        ans = obj.permutation(S);
        for(int i=0;i<ans.size();i++){
            cout<<"("<<ans[i]<<")";
        }
        cout << endl;
    }
}
  // } Driver Code Ends