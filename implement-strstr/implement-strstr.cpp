class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle=="")return 0;
        if(haystack=="")return -1;
        if(needle.size()>haystack.size()) return -1;
        for(int i=0;i<=haystack.size()-needle.size();i++)
        {   int j;
            for(j=0;j<needle.size();j++)
            {   
                if(needle[j]!=haystack[j+i])
                {   
                    break;
                }
            }
            if(j==needle.size())return i;
        }
        return -1;
    }
};