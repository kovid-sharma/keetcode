class ATM {
public:
    
    vector<long>value;
    vector<long>deposi;
    ATM() {
        value.push_back(20);
        value.push_back(50);
        value.push_back(100);
        value.push_back(200);
        value.push_back(500);
        deposi.resize(5);
        
        }
    
    void deposit(vector<int> banknotesCount) {
        for(int i=0;i<5;i++)
            deposi[i]+=banknotesCount[i];
            
    }
    
    vector<int> withdraw(int amount) {
        vector<int>now(5,0);
        for(int i=4;i>=0;i--)
        {
            long x=min(deposi[i],amount/value[i]);
            now[i]=x;
            amount-=now[i]*value[i];
        }
        if(amount==0)
        {
            for(int i=0;i<5;i++)
                deposi[i]-=now[i];
            return now;
        }
        return {-1};
    }
};

/**
 * Your ATM object will be instantiated and called as such:
 * ATM* obj = new ATM();
 * obj->deposit(banknotesCount);
 * vector<int> param_2 = obj->withdraw(amount);
 */