class Solution {
public:
    int solve(int n,int k)
    {
        if(n==1)
            return 0;
        if(k%2==0)
        {
            return solve(n-1,k/2)==0?1:0;
        }
        else
        {
            return solve(n-1,(k+1)/2)==1?1:0;
        }
    }
    int kthGrammar(int n, int k) {
        return solve(n,k);
    }
};