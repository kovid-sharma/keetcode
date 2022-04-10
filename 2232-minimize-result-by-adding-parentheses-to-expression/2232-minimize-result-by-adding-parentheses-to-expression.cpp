class Solution {
public:
    string minimizeResult(string e) {
        string num1;
        string num2;
        int i;
        for(i=0;i<e.size();i++)
        {
            if(e[i]=='+')
                break;
            num1.push_back(e[i]);
        }i++;
        num2.push_back('+');
        while(i<e.size())
        {
            num2.push_back(e[i]);
            ++i;
        }
        
        string ans;
        int mi=INT_MAX;
        int l1=num1.size();
        int l2=num2.size();
        for(int i=0;i<num1.size();i++)
        {
            for(int j=1;j<num2.size();j++)
            {
                int left,mid,rght;
                if(i==0)
                    left=1;
                else
                    left=stoi(num1.substr(0,i));
                if(j==num2.size()-1)
                    rght=1;
                else
                    rght=stoi(num2.substr(j+1,l2-j-1));
                 mid= stoi(num1.substr(i,l1-i))+stoi(num2.substr(0,j+1));
                if(mi>(left)*(rght)*(mid))
                {
                    mi=left*rght*mid;
                    ans= num1.substr(0,i)+"("+num1.substr(i,l1-i)+num2.substr(0,j+1)+")"+num2.substr(j+1,l2-j-1);
                }
            }
        }
        return ans;
        
    }
};