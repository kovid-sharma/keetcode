// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int N)
    {
        // your code here
        string ans;
        sort(arr,arr+N);
        char prev=arr[0][0];
        bool isOne=true;
        for(int i=1;i<N;i++)
        {
            if(arr[i][0]==prev){
                
            }
            else{
                isOne=false;
                break;
            }
        }
        if(!isOne)
        return "-1";
        int cnt=1;
        while(cnt<arr[0].size())
        {
            char prev=arr[0][cnt];
            bool isOne=true;
            for(int i=1;i<N;i++)
             {
                 if(arr[i][cnt]==prev){
                
                 }
                else{
                  isOne=false;
                  break;
                }
            }
            if(isOne)
            cnt++;
            else
            break;
        }
        if(cnt==arr[0].size())
        return arr[0];
        return arr[0].substr(0,cnt);
    }
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal
  // } Driver Code Ends