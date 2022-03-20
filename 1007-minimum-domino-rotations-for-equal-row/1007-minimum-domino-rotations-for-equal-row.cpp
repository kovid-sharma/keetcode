class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        int cnt=0;
        int m=0;
        int chc=0;
        int n=tops.size();
        for(int now=1;now<=6;now++)
        {   cnt=0;
            for(int i=0;i<n;i++)
            {
               if(tops[i]==now or bottoms[i]==now) 
                   cnt++;
            }
            m=max(cnt,m);
            if(m==n){
               chc=now;
                break;
            }
                
        }
        if(m<n)
            return -1;
        int cnt2=0;
        for(int i=0;i<n;i++)
        {
            if(tops[i]!=chc)
                cnt2++;
        }int cnt3=0;
        for(int i=0;i<n;i++)
        {
            if(bottoms[i]!=chc)
                cnt3++;
        }
        
        return min(cnt2,cnt3);
        
    }
};