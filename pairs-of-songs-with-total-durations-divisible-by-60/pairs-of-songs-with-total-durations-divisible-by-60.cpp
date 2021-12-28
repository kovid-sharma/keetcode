class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int n=time.size();
        int ct=0;
        int c2=0;
        for(int i=0;i<n;i++)
            time[i]%=60;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[time[i]]++;
        }
        for(auto& it:mp)
        {
            if(it.first==30 or it.first==0)
                ct+=(mp[it.first]-1)*(it.second)/2;
            else if(it.first<30 and mp.count(60-it.first))
                ct+=(mp[it.first]*mp[60-it.first]);
        }
        return ct;
    }
};