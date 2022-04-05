class Solution {
public:
    bool judgeSquareSum(int c) {
        long l=0;
        long h= sqrt(c)+1;
        while(l<=h)
        {
            long ans=l*l+h*h;
            if(ans==c)return true;
            if(ans<c)
                l++;
            else
                h--;
        }
        return false;
    }
};