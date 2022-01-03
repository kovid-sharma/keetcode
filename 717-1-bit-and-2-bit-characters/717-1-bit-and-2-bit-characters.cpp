class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int len=bits.size();
        if(len==1 and bits[0]==0)return true;
        if(bits[len-1]==1)return false;
        if(bits[len-1]==0 and bits[len-2]==0)return true;
        int cnt=0;
        for(int i=0;i<len-1;i++)
        {
            if(bits[i]==1)
                cnt++;
            else
                cnt=0;
        }
        if(cnt&1)return false;
        return true;
    }
};