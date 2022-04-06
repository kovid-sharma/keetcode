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
/*int threeSumMulti(vector<int>& A, int target) {
        unordered_map<int, long> c;
        for (int a : A) c[a]++;
        long res = 0;
        for (auto it : c)
            for (auto it2 : c) {
                int i = it.first, j = it2.first, k = target - i - j;
                if (!c.count(k)) continue;
                if (i == j && j == k)
                    res += c[i] * (c[i] - 1) * (c[i] - 2) / 6;
                else if (i == j && j != k)
                    res += c[i] * (c[i] - 1) / 2 * c[k];
                else if (i < j && j < k)
                    res += c[i] * c[j] * c[k];
            }
        return res % int(1e9 + 7);
    }*/