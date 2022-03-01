class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int,int>mp;
        for(int i=0;i<deck.size();i++)
            mp[deck[i]]++;
        int res=0;
        for(auto it:mp)
        {
            res= __gcd(it.second,res); 
        }
        if(res>1)
            return true;
        return false;
    }
};