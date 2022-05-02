class Solution {
public:
    bool isSub(stack<char>st,string s){
        int n=s.size();
        for(int i=n-1;i>=0;i--)
        {
            if(st.top()==s[i]){
                st.pop();
            }
            if(st.empty())
                return true;
        }
        if(st.empty())
            return true;
        return false;
    }
    int maximumRemovals(string s, string p, vector<int>& removable) {
        int lo=0;
        int hi=removable.size()-1;
        string str=s;
        stack<char>st;
        for(auto ch:p){
            st.push(ch);
        }
        while(lo<=hi)
        {
            int mid=lo+(hi-lo)/2;
            for(int i=0;i<=mid;i++)
            {
                s[removable[i]]='-';
            }
            if(isSub(st,s)){
                lo=mid+1;
            }
            else{
                //do
                for(int i=0;i<=hi;i++)
                    s[removable[i]]=str[removable[i]];
                hi=mid-1;
            }
        }
        return lo;
    }
};