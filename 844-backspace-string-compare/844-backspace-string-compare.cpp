class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>s1;
        bool emp1=false;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='#' and !s1.empty()){
                s1.pop();
                
            }
            else if(s[i]=='#')continue;
            else{
                s1.push(s[i]);
            }
        }
        stack<char>t1;
        for(int i=0;i<t.size();i++)
        {
            if(t[i]=='#' and !t1.empty()){
                t1.pop();
                
            }
            else if(t[i]=='#')continue;
            else{
                t1.push(t[i]);
            }
        }
        if(s1==t1)
            return true;
        return false;
        
    }
};