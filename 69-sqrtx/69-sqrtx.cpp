class Solution {
public:
    int mySqrt(int x) {
        int hi=x;
        int lo=1;
        while(lo<=hi)
        {
            long mid= lo+(hi-lo)/2;
            if(mid*mid==x)
                return (int)mid;
            else if(mid*mid>x)
                hi=mid-1;
            else
                lo=mid+1;
        }
        return lo-1;
    }
};