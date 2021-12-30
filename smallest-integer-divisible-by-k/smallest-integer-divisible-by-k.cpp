class Solution {
public:
    int smallestRepunitDivByK(int k) {
        if(k%2==0)return -1;
        int x=1;
        for(int i=1;i<=k;i++)
        {
            
            if(x%k==0)return i;
            x%=k;
            x*=10;
            x++;
        }
        return -1;
    }
};