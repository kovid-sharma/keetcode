class Solution {
public:
    void point(int left,int right,vector<char>&s)
    {
        if(left>=right)
            return;
        swap(s[left++],s[right--]);
        point(left,right,s);
    }
    void reverseString(vector<char>& s) {
        point(0,s.size()-1,s);
        
    }
};