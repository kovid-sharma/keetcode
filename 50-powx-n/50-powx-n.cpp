class Solution {
public:
    double myPow(double x, int n) {
        if(n==1 and x==0)return 0;
        if(x==0)return 1;
        double nu=n;
        if(nu<0)
        {
            nu=-nu;
            x=1/x;
        }
        return pow(x,nu);
    }
};