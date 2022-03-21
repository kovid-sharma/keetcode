class Solution {
public:
    int numberOfSubstrings(string s) {
        int i=0;
        int ans=0;
        vector<int>arr(3,0);
        for(int t=0;t<s.size();t++)
        {
            arr[s[t]-'a']++;
            while(arr[0] and arr[1] and arr[2]){
                arr[s[i]-'a']--;
                i++;
            }
            ans+=i;
        }
        return ans;
    }
};