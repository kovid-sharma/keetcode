class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack.size()<needle.size())
            return -1;
        for(int i=0;i<=haystack.size()-needle.size();i++)
        {   
            bool all=true;
            int j;
            for(j=0;j<needle.size();j++)
            {
                if(needle[j]==haystack[i+j])
                    continue;
                else
                    all=false;
            }
            if(all)return i;
        }
        return -1;
    }
};