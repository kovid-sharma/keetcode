// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    double mi=1e-6;
    double solve(double low,double high,double magnets[],int n){
        while(low<high)
        {
            double mid= (high+low)/2;
            double want=0.0;
            for(int i=0;i<n;i++)
            want+=1/(mid-magnets[i]);
            if(want>mi)
            low=mid;
            else if (want<-mi)
            high=mid;
            else
            return mid;
        }
    }
        void nullPoints(int n, double magnets[], double getAnswer[])
    {
        // Your code goes here   
        
        
        
        
        for(int i=0;i<n-1;i++)
        {
            getAnswer[i]=solve(magnets[i],magnets[i+1],magnets,n);
        }
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        double magnets[n], getAnswer[n];
        for(int i=0;i<n;i++)
        cin>>magnets[i];
        Solution ob;
        ob.nullPoints(n, magnets, getAnswer);
        
        for(int i=0; i<n-1; i++)
            printf("%0.2lf ",getAnswer[i]);
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends