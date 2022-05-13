// { Driver Code Starts
#include <iostream>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        long long psum[n];
        psum[0]=a[0];
        for(int i=1;i<n;i++){
            psum[i]=psum[i-1]+a[i];
            //cout<<psum[i]<<" ";
        }
        for(int i=0;i<n;i++)
        {   
            long long lsum=0;
            long long rsum=0;
            if(i==0)
            lsum=0;
            else
            lsum=psum[i-1];
            rsum=psum[n-1]-psum[i];
            if(lsum==rsum)
            return i+1;
        }
        return -1;
    }

};

// { Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends