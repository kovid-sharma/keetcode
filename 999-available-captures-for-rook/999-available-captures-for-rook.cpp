class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int idx,idy;
        for(int i=0;i<board.size();i++)
            for(int j=0;j<board[0].size();j++)
                if(board[i][j]=='R')
                {
                    idx=i;
                    idy=j;
                }
        int cnt=0;
        int cpx=idx;
        int cpy=idy;
        while(idx<board.size())
        {
           if(board[idx][idy]=='p'){
               cnt++;break;
           }
            if(board[idx][idy]=='B')break;
            idx++;
        }
        idx=cpx;
        while(idx>=0)
        {
           if(board[idx][idy]=='p'){
               cnt++;break;
           }
            if(board[idx][idy]=='B')break;
            idx--; 
        }
        idx=cpx;
        while(idy<board[0].size())
        {
            if(board[idx][idy]=='p'){
               cnt++;break;
           }
            if(board[idx][idy]=='B')break;
            idy++;
        }
        idy=cpy;
        while(idy>=0)
        {
            if(board[idx][idy]=='p'){
               cnt++;break;
           }
            if(board[idx][idy]=='B')break;
            idy--;
        }
        return cnt;
    }
};