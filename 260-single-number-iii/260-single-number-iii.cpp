class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        
        unordered_map<int,int>mo;
        vector<int>asn;
        for(auto it:nums)
        {
            mo[it]++;
        }
        for(auto it:mo)
        {
            if(it.second<2)
                asn.push_back(it.first);
        }
        return asn;
    }
};