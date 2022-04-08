class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int>mp(1001,0);
        for(auto it:arr)
            mp[it]++;
        for(int i=1;i<1001;i++)
        {
            if(mp[i]==0)
                k--;
            if(k==0)
                return i;
        }
        return k+1000;
    }
};