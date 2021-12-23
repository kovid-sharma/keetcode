class Solution {
public:
    int reverse(int x) {
        if(x==0) return 0;
        bool q=true;
        x*=1LL;
        if(x==INT_MIN)return 0;
        if(x<0){x*=-1LL;q=false;}
        long long ans=0;
        while(x)
        {
           ans+=x%10;
            ans*=10;
            x/=10;
        }
        if(ans/10>INT_MAX)return 0;
        return q?ans/10:-1*ans/10;
        
    }
};