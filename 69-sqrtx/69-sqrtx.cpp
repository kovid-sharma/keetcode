class Solution {
public:
    int mySqrt(int x) {
       if(x<=1)return x;
        if(x<=3)return 1;
        long long hi=x,lo=1;
        while(hi>lo)
        {
            long long mid=lo+(hi-lo)/2;
            if(mid*mid<x)lo=mid+1;
            else if(mid*mid>x)hi=mid;
            else return mid;
        }
        return hi-1;
    }
};