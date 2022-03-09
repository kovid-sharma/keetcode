class Solution {
public:
    string interpret(string command) {
       string ans="";
        for(int i=0;i<command.size();)
        {
            if(command[i]=='G'){
                i++;
                ans+='G';
                continue;
            }
            if(command[i]=='(' and command[i+1]==')'){
                i+=2;
                ans+='o';
                continue;
            }
            if(command[i]=='(' and command[i+1]=='a'){
                i+=4;
                ans+="al";
            }
        }
        return ans;
    }
};