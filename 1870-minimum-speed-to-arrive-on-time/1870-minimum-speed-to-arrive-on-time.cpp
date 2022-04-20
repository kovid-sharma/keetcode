class Solution {
public:
    double time(vector<int>dis,int mids)
    {
        double sum=0;
        for(int i=0;i<dis.size();i++)
        {
            sum=ceil(sum);
            sum+=(double)dis[i]/mids;
        }
        return sum;
    }
    int minSpeedOnTime(vector<int>& dist, double hour) {
        int los=1;
        int his=1e7;
        while(los<=his)
        {
            int mids= los+(his-los)/2;
            if(time(dist,mids)<=hour)
            {
                his=mids-1;
            }
            else{
                los=mids+1;
            }
        }
        if(los>1e7)return -1;return los;
    }
};