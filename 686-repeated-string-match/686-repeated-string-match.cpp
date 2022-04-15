class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        int n=a.size();
        int m=b.size();
        int mul= m/n;
        if(m%n==0)
        {
            
        }
        else
        {
            mul+=1;
        }
        string res;
        for(int i=0;i<mul;i++)
            res+=a;
        //cout<<res;
        if(res.find(b)!=-1)
            return mul;
        res+=a;
        if(res.find(b)!=-1)
            return mul+1;
        return -1;
    }
};