class Solution {
public:
    int INF=1e9+7;
    int countPairs(vector<int>& del) {
        
        int mPow=1<<22;
        unordered_map<long long,long long>mp;
        for(int i=0;i<del.size();i++)
            mp[del[i]]++;
        
            long long ans=0;
            for(auto it:mp)
            {
                int num=it.first;
                long long cnt=it.second;
                int twoSt=1;
                while(twoSt<=mPow)
                {
                    if(num*2==twoSt){
                    ans+=((cnt)*(cnt-1))/2;
                    ans%=INF;
                   }
                   else if(mp.find(twoSt-num)!=mp.end() and mp[twoSt-num]>0){
                    int toSub=mp[twoSt-num]*mp[num];
                    ans+=toSub;                    
                   }
                    ans%=INF;
                    twoSt*=2;
                    
                }
                mp[num]=0;
            
            }
        return (int)ans;
    }
};