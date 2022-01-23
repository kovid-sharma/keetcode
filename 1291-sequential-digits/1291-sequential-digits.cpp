class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        //making a queue for such numbers
        queue<int> seqnum;
        for(int i=1;i<=9;i++)
            seqnum.push(i);
        vector<int>ret;
        while(!seqnum.empty())
        {
            int qtop=seqnum.front();
            seqnum.pop();
            int nnum=qtop*10+ qtop%10+1;
            if(qtop%10+1<10)
            seqnum.push(nnum);
            if(qtop>high) return ret;
            if(qtop<=high and qtop>=low) ret.push_back(qtop);
        }
        return ret;
    }
};