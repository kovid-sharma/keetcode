class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int k1=1,k2=INT_MAX;
        while (k1<k2) 
        {
            int k=k1 +(k2-k1)/2;
            int tmp=0;
            for (auto&it: piles)
            {   
                if(it%k==0)
                    tmp+=it/k;
                else
                {
                    tmp+=it/k;
                    tmp++;
                }
                
            }
                
            if (tmp>h)
                k1=k+1;
            else
                k2=k;
        }
        return k1;
    }
};