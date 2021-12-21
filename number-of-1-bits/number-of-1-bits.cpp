class Solution {
public:
    int hammingWeight(uint32_t n) {
        int arr[32]={0,1,1,2,1,2,2,3,1,2,2,3,2,3,3,4,1,2,2,3,2,3,3,4,2,3,3,4,3,4,4,5};
        int cnt=0;int k=31;
        while(n)
        {
            cnt=cnt+arr[n&k];
            n>>=5;
        }
        return cnt;
    }
};