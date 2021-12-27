class Solution {
public:
    int romanToInt(string s) {
        int sum=0;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            if(s[i]=='I')sum++;
            if(s[i]=='V')sum+=5;
            if(s[i]=='X')sum+=10;
            if(s[i]=='L')sum+=50;
            if(s[i]=='C')sum+=100;
            if(s[i]=='D')sum+=500;
            if(s[i]=='M')sum+=1000;
        }
        for(int i=0;i<n-1;i++)
        {
            if(s[i]=='I' and s[i+1]=='V')sum-=2;
            if(s[i]=='I' and s[i+1]=='X')sum-=2;
            if(s[i]=='X' and s[i+1]=='L')sum-=20;
            if(s[i]=='X' and s[i+1]=='C')sum-=20;
            if(s[i]=='C' and s[i+1]=='D')sum-=200;
            if(s[i]=='C' and s[i+1]=='M')sum-=200;
        }
        return sum;
    }
};