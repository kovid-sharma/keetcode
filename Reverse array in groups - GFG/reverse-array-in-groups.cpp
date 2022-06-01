// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{
public:
    //Function to reverse every sub-array group of size k.
    void rev(int l,vector<long long>&arr,int k)
    {
        int r=l+k;
        if(r>=arr.size())return;
        while(l<=r)
        {
            swap(arr[l],arr[r]);
            l++;
            r--;
        }
    }
    void reverseInGroups(vector<long long>& arr, int n, int k){
        // code here
        int i;
        for(i=0;i<n;i+=k)
        {
        
            rev(i,arr,k-1);
        }
        int l=n-1;
        i-=k;
        while(l>=i){
            swap(arr[l],arr[i]);
            l--;
            i++;
        }
        
    }
};

// { Driver Code Starts.
int main() {
    int t; 
    cin >> t; 
    while(t--){ 
        int n;
        cin >> n; 
        vector<long long> arr; 
        int k;
        cin >> k; 

        for(long long i = 0; i<n; i++)
        {
            long long x;
            cin >> x; 
            arr.push_back(x); 
        }
        Solution ob;
        ob.reverseInGroups(arr, n, k);
        
        for(long long i = 0; i<n; i++){
            cout << arr[i] << " "; 
        }
        cout << endl;
    }
}

  // } Driver Code Ends