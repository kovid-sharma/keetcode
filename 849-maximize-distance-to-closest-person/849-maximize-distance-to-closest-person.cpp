class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int n=seats.size();
        int strindx=0;
        int endindx=n-1;
        
        for(int i=0;i<n;i++)
        {
            if(seats[i]==0)
            {
                strindx++;
            }
            else
                break;
        }
        for(int i=n-1;i>=0;i--)
        {
            if(seats[i]==0)
            {
                endindx--;
            }
            else
                break;
        }
        endindx=n-1-endindx;
        int ans=0,cnt=0;
        for(int i=0;i<n;i++)
        {
            if(seats[i]==0)
                cnt++;
            else
                ans=max(ans,cnt),cnt=0;
        }
        ans++;
        return max(max(ans/2,endindx),strindx);
    }
};