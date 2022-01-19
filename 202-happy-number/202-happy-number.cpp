class Solution {
public:
    int sqonce(int n)
    {   int ans=0;
        while(n)
        {
          ans+=pow(n%10,2);
            n/=10;
        }
        return ans;
    }
    int sqtwice(int n)
    {
        int ans=0;
        while(n)
        {
          ans+=pow(n%10,2);
            n/=10;
        }
        int fin=0;
        while(ans)
        {
            fin+=pow(ans%10,2);
            ans/=10;
        }
        return fin;
    }
    bool isHappy(int n) {
        //floyd algorithm
        int slow=n;int fast=n;
        slow=sqonce(slow);
        fast=sqtwice(fast);
        if(slow==1 or fast==1) return true;
        while(slow!=fast)
        {
            slow=sqonce(slow);
            fast=sqtwice(fast);
            if(fast==1)return true;
        }
        
        return false;
    }
};