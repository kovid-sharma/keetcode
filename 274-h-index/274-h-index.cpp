class Solution {
public:
    int hIndex(vector<int>& citations) {
        int hidx=0;
        for(int i=0;i<citations.size();i++)
        {
            int cnt=0;
            for(int j=i;j>=0;j--)
            {
                if(citations[j]>hidx)
                    cnt++;
            }
            if(cnt>hidx)
                hidx++;
        }
        return hidx;
    }
};