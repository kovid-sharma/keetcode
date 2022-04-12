class Solution {
public:
    int c(int n)
    {
        if(n==1)return 10;
        int ret=1;
        for(int i=1;i<=n;i++)
        {
            if(i==1)
            {
                ret*=(9);
            }
            else{
                ret*=(11-i);
            }
            

        }return ret+c(n-1);
        
    }
    int countNumbersWithUniqueDigits(int n) {
        if(n==0)return 1;
        return c(n);
    }
};