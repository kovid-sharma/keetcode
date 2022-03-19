class FreqStack {
public:
        unordered_map<int,int>numfreq;
        unordered_map<int,stack<int>>freqstk;
        int maxfreq=INT_MIN;
    FreqStack() {
        
    }
    
    void push(int val) {
        numfreq[val]++;
        maxfreq=max(maxfreq,numfreq[val]);
        freqstk[numfreq[val]].push(val);
    }
    
    int pop() {
        int t=freqstk[maxfreq].top();
        freqstk[maxfreq].pop();
        numfreq[t]--;
        if(freqstk[maxfreq].empty())
            maxfreq--;
        return t;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */