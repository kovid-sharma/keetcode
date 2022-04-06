class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
        int ans=0;
        int mod=1e9+7;
        unordered_map<int,long>m;
        for(int a:arr)m[a]++;
        for(auto it:m)
            for(auto it2:m){
                int a=it.first;
                int b=it2.first;
                int c=target-a-b;
                if(m.find(c)==m.end())continue;
                if(a==b and a==c)
                {
                    ans+=(m[a]%mod*(m[a]-1)%mod*(m[a]-2)/6)%mod;
                }
                else if(c==b and b!=a)
                {
                    ans+=(m[a]%mod*(m[b]%mod*(m[b]-1))/2)%mod;
                }
                else if(c<b and b<a)
                {
                    ans+=(m[a]%mod*m[b]%mod*m[c])%mod;
                }
            }
        return ans%mod;
    }
};
