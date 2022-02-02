class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        //going to use hash function robin karp kind of algo
        vector<int>ret;
        int k= p.size();
        if(k>s.size())
            return ret;
        long long sum_hash=0;
        for(int i=0;i<k;i++)
            sum_hash+=(p[i]-'a')*(pow(2,(p[i]-'a')));
        long long tmp_hash=0;
        for(int i=0;i<k;i++)
            tmp_hash+=(s[i]-'a')*(pow(2,(s[i]-'a')));
        for(int i=0;i<s.size()-k+1;i++)
        {
            if(tmp_hash==sum_hash)
                ret.push_back(i);
            tmp_hash-=(s[i]-'a')*(pow(2,(s[i]-'a')));
            tmp_hash+=(s[i+k]-'a')*(pow(2,(s[i+k]-'a')));
        }
        return ret;
    }
};