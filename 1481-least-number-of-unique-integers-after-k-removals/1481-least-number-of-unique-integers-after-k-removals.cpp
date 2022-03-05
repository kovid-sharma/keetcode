class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int>mp;
        for(auto it:arr)
            mp[it]++;
        vector<int>numfreq;
        for(auto it:mp)
            numfreq.push_back(it.second);
        sort(numfreq.begin(),numfreq.end());
        int total=arr.size();
        int idx=0;
        while(k>0)
        {   
            if(k<numfreq[idx])
            {
                total-=k;
                k-=k;
                break;
            }
            k-=numfreq[idx];
            total-=numfreq[idx];
            idx++;
        }
        return numfreq.size()-idx;
    }
};