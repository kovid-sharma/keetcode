class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int len=time.size();
        for(int i=0;i<len;i++)
        {
            time[i]%=60;
        }
        unordered_map<int,int>m;
        for(int i=0;i<len;i++)
        {
            m[time[i]]++;
        }
        int ret=0;
        for(auto&it:m)
        {
            if(it.first==30 or it.first==0)
            {
                ret+=(it.second)*(it.second-1)/2;
            }
            else if(it.first<30 and m.count(60-it.first)!=0)
            {
                ret+=(it.second)*m[60-it.first];
            }
        }
        return ret;
        
    }
};