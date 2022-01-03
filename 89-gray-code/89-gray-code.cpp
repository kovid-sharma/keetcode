class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int> graycodecreator(1<<n);
        for(int i=0;i<graycodecreator.size();i++)
            graycodecreator[i]=i xor (i>>1);
        return graycodecreator;
    }
};