class Solution {
public:
    string reverseStr(string s, int k) {
        int idx=0;
        int n=s.size();
        while(true)
        {   
            if(idx+k<=n){
            reverse(s.begin()+idx,s.begin()+k+idx);
            idx+=2*k;
            }
            else{
                reverse(s.begin()+idx,s.end());
                break;
            }
        }
        return s;
    }
};