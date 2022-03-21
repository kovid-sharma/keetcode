class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int>ret;
        int m_char=1;
        int prev_part=0;
        vector<int>last_seen(26,0);
        for(int i=0;i<s.size();i++)
            last_seen[s[i]-'a']=i+1;
        for(int i=0;i<s.size();i++)
        {   m_char=max(m_char,last_seen[s[i]-'a']);
            if(m_char==i+1){
                ret.push_back(m_char-prev_part);
                prev_part=m_char;
            }
        }
        return ret;
    }
};