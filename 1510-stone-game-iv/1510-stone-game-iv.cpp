class Solution {
public:
    bool winnerSquareGame(int n) {
        //bottom up now
        vector<bool>arr(n+1,false);
        arr[1]=true;
        for(int i=1;i<=n;i++)
        {
            for(int s=1;s*s<=i;s++)
            {
                if(arr[i-s*s]==false)
                {
                    arr[i]=true;
                    break;
                }
            }
        }
        return arr[n];
    }
};