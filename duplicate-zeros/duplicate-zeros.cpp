class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n=arr.size();
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==0)
                cnt++;
        }
        int r= cnt+n-1;
        for(int i=n-1;i>=0;i--)
        {
            if(r<n){
                arr[r]=arr[i];
                
            }
            if(arr[i]==0)
                r--;
            if(arr[i]==0 and r<n){
                arr[r]=0;
                
                
            }
            r--;
            
        }
    }
};