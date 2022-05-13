// { Driver Code Starts
//Initial Template for C

#include <stdio.h>


 // } Driver Code Ends
//User function Template for C
// void swap(int& a,int& b){
//     int c=a;
//     a=b;
//     b=c;
// }
void sort012(int a[], int n)
{
    int lo=0;
    int mi=0;
    int hi=n-1;
    while(mi<=hi){
        if(a[mi]==0){
            int c=a[mi];
            a[mi]=a[lo];
            a[lo]=c;
            lo++;mi++;
        }
        else if(a[mi]==1){
            mi++;
        }
        else{
            int c=a[mi];
            a[mi]=a[hi];
            a[hi]=c;
            hi--;
        }
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