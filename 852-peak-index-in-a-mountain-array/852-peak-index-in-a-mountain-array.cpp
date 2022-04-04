class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int l=1;
        int n=arr.size();
        int r=n-1;
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(arr[mid]>arr[mid-1] and arr[mid]>arr[mid+1])
            {
                return mid;
            }
            if(arr[mid]>arr[mid-1])
                l=mid+1;
            else if(arr[mid]<arr[mid-1])
                r=mid-1;
        }
        return l;
        
    }
};