class Solution {
public:
    void solve(int open,int close,vector<string>&res,string op)
    {
        if(open==0 and close==0){
            res.push_back(op);return;
        }        if(open!=0)
        {
            string op1=op;
            op1+='(';
            solve(open-1,close,res,op1);
        }
        if(close>open)
        {
            string op2=op;
            op2+=')';
            solve(open,close-1,res,op2);
        }
    }
    vector<string> generateParenthesis(int n) {
        //balanced parentheses
        //aditya verma
        vector<string>res;
        int open=n;
        int close=n;
        string op="";
        solve(open,close,res,op);
        return res;
    }
};