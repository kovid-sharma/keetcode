class Solution {
public:
    bool isVowel(char c)
    {
        return c=='a' or c=='e' or c=='i' or c=='o' or c=='u';
    }
    int countVowelSubstrings(string word) {
        int n=word.size();
        int cnt=0;
        unordered_set<char>st;
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                if(isVowel(word[j]))
                    st.insert(word[j]);
                else
                    break;
                if(st.size()==5)
                    cnt++;
            }
            st.clear();
        }
        return cnt;
    }
};