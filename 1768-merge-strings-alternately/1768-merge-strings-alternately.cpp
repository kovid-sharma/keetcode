class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string merge;
        int n=word1.size();
        int m=word2.size();
        int idx=0;
        while(n and m)
        {
            merge+=word1[idx];
            merge+=word2[idx];
            n--;m--;idx++;
        }
        if(n==0)
        {
            while(m){
                m--;
                merge+=word2[idx];
                idx++;
            }
        }
        if(m==0)
        {
            while(n){
                n--;
                merge+=word1[idx];
                idx++;
            }
        }
        return merge;
    }
};