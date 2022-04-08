class Solution {
public:
    int arrangeCoins(int n) {
        if(n==1)return 1;
        //if(n==3)return 2;
        int lo=1;
        int hi=n;
        while(lo<=hi)
        {
            long mid=lo+(hi-lo)/2;
            long bana= (mid)*(mid+1)/2;
            if(bana==n)
                return mid;
            else if(bana>n)
                hi=mid-1;
            else
                lo=mid+1;
        }
        return hi;
    }
};