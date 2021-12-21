class Solution {
public:
    bool isPalindrome(int x) {
       if(x<0)return false;
        if(x<10)return true;
        stack<int>st;int c=x;
        while(x)
        {
            st.push(x%10);
            x/=10;
        }
        while(c)
        {
            if(st.top()!=c%10)
                return false;
                st.pop();
            c/=10;
        }
        return true;
    }
};