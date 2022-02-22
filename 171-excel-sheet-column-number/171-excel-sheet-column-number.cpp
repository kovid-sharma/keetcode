class Solution {
public:
    int titleToNumber(string columnTitle) {
        int sum=0;
        int cnt=1;
        for(int i=columnTitle.size()-1;i>=0;i--)
        {
            sum+=pow(26,cnt-1)*(columnTitle[i]-'A'+1);
                cnt++;
        }
        return sum;
    }
};