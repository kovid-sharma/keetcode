class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        vector<vector<int>>arr(26,vector<int>(26,0));
        int ret=0;
        for(auto& s:words)
        {
            int x=s[0]-'a';int y=s[1]-'a';
            if(arr[y][x]>0)
            {
                ret+=4;
                arr[y][x]--;
            }
            else
                arr[x][y]++;
        }
        for(int i=0;i<26;i++)
        {
            if(arr[i][i]>0)
            {
               ret+=2;
                break;
            }
                
        }
        return ret;
    }
};