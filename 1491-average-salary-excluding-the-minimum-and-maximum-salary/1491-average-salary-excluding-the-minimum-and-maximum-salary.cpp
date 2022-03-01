class Solution {
public:
    double average(vector<int>& salary) {
        int mi=INT_MAX;
        int ma=INT_MIN;
        int sum=0;
        int n=salary.size();
        for(int i=0;i<n;i++)
        {
            mi=min(mi,salary[i]);
            ma=max(ma,salary[i]);
            sum+=salary[i];
        }
        sum-=mi;
        sum-=ma;
        return (double)sum/(n-2);
    }
};