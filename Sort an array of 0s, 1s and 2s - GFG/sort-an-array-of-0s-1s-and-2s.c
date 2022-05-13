// { Driver Code Starts
//Initial Template for C

#include <stdio.h>


 // } Driver Code Ends
//User function Template for C

void sort012(int a[], int n)
{
    int zero=0;
    int one=0;
    for(int i=0;i<n;i++){
        if(a[i]==0) zero++;
        else if(a[i]==1) one++;
    }
    for(int i=0;i<n;i++)
        a[i]=2;
    for(int i=0;i<n;i++){
        if(i<zero) a[i]=0;
        else if(i>=zero && i<one+zero) a[i]=1;
    }

    
}

// { Driver Code Starts.

int main() {

    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d", &arr[i]);
        }

        sort012(arr, n);

        for (int i = 0; i < n; i++)
            printf("%d ", arr[i]);
        printf("\n");
    }
    return 0;
}
  // } Driver Code Ends