class Solution {
public:
    int numSquares(int n) {
        if(n==1)return 1;
        queue<int>q;
        q.push(n);
        int s=1;
        while(!q.empty())
        {
            int n= q.size();
            for(int i=0;i<n;i++)
            {
                int now= q.front();
                q.pop();
                for(int j=1;j*j<=now;j++)
                {
                    if(j*j>now)
                    break;
                    q.push(now-j*j);
                    if(j*j==now)
                        return s;
                }
            }
            s++;
        }
        return s;
    }
};