/*This is a classic problem
For making this work I made a ret 2d string which i have to return
then a temporary 1 d array of string so i have pushed the palindrome stings in this temp 1d array
check the isPalindrome function
Now the base case of the recursive call is when my index becomes equal to lenght of the input string s
The last correct recusion call is of func(n,temp,ret,s) which must have worked in s(n,n) ie one single end character*/
class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ret;
        if(s.size()==0)return ret;
        vector<string>temp;
        func(0,temp,ret,s);
        return ret;
    }
    void func(int index,vector<string>&temp,vector<vector<string>>&ret,string &s)
    {
        if(index==s.length())
        {
            ret.push_back(temp);
            return;
        }  
        for(int i=index;i<s.size();i++)
        {   
            if(isPalindrome(s,index,i))
            {
               temp.push_back(s.substr(index,i-index+1));
                func(i+1,temp,ret,s);
                temp.pop_back(); 
            }
        }
        
    }
    bool isPalindrome(string &s,int str,int end)
    {
        while(str<=end)
        {
            if(s[str++]!=s[end--])
                return false;
        }
        return true;
    }
};
