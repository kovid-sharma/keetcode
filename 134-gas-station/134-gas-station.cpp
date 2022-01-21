class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
    if(accumulate(gas.begin(),gas.end(),0)<accumulate(cost.begin(),cost.end(),0))
            return -1;
        int indx=0;
        int petrol=0;
        for(int i=0;i<2*gas.size();i++)
        {   
            int tmp=i%gas.size();
            petrol+=gas[tmp];
            petrol-=cost[tmp];
            if(petrol<0) indx=tmp+1,petrol=0;
        }
        
        return indx%gas.size();
    }
};