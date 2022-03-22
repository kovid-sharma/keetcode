class Solution {
public:
    int longestPalindrome(string s) {
       unordered_map<char,int>mp;
       int idx=0;
       while(idx<s.size()){
           mp[s[idx]]++;
           idx++;
       }
        bool odd=false;
        int nas=0;
        for(auto it:mp){
            if(it.second%2==0){
                nas+=it.second;
            }
            else{
                odd=true;
                nas+=it.second-1;
            }
        }
        if(odd==true)return nas+1;
        return nas;
        
    }
};