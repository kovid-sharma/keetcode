class Solution {
public:
    int value(vector<int>pile,int div)
    {   int ret=0;
        for(int i=0;i<pile.size();i++)
        {
           if(pile[i]%div)
           {
               ret++;
           }
            ret+=pile[i]/div;
        }
     return ret;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int los=1;
        int his=*max_element(piles.begin(),piles.end())+1;
        while(los<=his)
        {   
            int mid=los+(his-los)/2;
            if(value(piles,mid)>h)
            {
                los=mid+1;
            }
            else{
                his=mid-1;
            }
        }
        return los;
    }
};