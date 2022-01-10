class Solution {
public:
    string addBinary(string a, string b) {
        if(a.size()<b.size())
            return addBinary(b,a);
        if(b.size()==1 and b[0]=='0')return a;
        int len=a.size();
        int l2=b.size();
        while(l2<len)
        {
            b='0'+b;
            l2++;
        }
        char carry='0';
        string res="";
        for(int i=len-1;i>=0;i--)
        {
            if(b[i]=='0' and a[i]=='0' and carry=='0')
                res='0'+res;
            else if(a[i]!=b[i] and carry=='0')
                res='1'+res;
            else if(a[i]=='1' and b[i]=='1' and carry=='0')
            {
                res='0'+res;
                carry='1';
            }
            else if(b[i]=='0' and a[i]=='0' and carry=='1')
            {
                res='1'+res;
                carry='0';
            }
            else if(b[i]!=a[i] and carry=='1')
                res='0'+res;
            else if(b[i]=='1' and a[i]=='1' and carry=='1')
                res='1'+res;
            
        }
        if(carry=='1')
            res='1'+res;
        return res;
    }
};