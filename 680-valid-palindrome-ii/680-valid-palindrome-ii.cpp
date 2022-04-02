class Solution {
public:
    bool func(string s,int l,int r,int c){
        if(c>1) return false;
        while(s[l]==s[r]){
            r--;
            l++;
            if(l>=r)return true;
        }
        return func(s,l,r-1,c+1) or func(s,l+1,r,c+1);
        
    }
    bool validPalindrome(string s) {
        int left=0;
        int rght=s.size()-1;
        return func(s,left,rght,0);
    }
};