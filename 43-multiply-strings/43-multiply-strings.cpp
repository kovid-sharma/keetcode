class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1=="0" or num2=="0")return "0";
        int n=num1.size();
        n+=num2.size();
        vector<int>sim(n,0);
        for(int i=num1.size()-1;i>=0;i--)
        {
            for(int j=num2.size()-1;j>=0;j--)
            {
                sim[i+j+1]+=(num1[i]-'0')*(num2[j]-'0');
                sim[i+j]+=sim[i+j+1]/10;
                sim[i+j+1]%=10;
            }
        }
        int idx=0;
        for(;idx<n;idx++)
            if(sim[idx]!=0)break;
        string res;
        while(idx<n)
            res.push_back(sim[idx++]+'0');
        return res;
    }
};