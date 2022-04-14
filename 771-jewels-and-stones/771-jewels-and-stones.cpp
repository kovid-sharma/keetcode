class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int>freq;
        for(auto it:stones)
            freq[it]++;
        int res=0;
        for(int i=0;i<jewels.size();i++)
            res+=freq[(jewels[i])];
        return res;
    }
};