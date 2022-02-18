class Solution {
public:
    string removeKdigits(string num, int k) {
        int sz=num.size();
        if(sz==k or num=="0") return "0";
        int rep=0;
        for(int i=0;i<k;i++)
        {
            while(rep+1<sz and num[rep]<=num[rep+1])
                rep++;
            num.erase(rep,1);
            rep=0;
        }
        int zr=0;
        while(zr+1<sz and num[zr]=='0')
            zr++;
        num.erase(0,zr);
        if(num=="")return "0";
        return num;
    }
};