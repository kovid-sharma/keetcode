class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>arr(256,-1);
        if(s.empty())return 0;
        int str=-1;
        int ans=1;
        for(int i=0;i<s.size();i++)
        {
            str=max(arr[s[i]],str);
            arr[s[i]]=i;
            ans=max(ans,arr[s[i]]-str);
        }
        return ans;
        
    }
};