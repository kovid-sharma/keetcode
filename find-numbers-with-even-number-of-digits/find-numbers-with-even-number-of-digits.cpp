class Solution {
public:
    bool num_dig(int n){
        int dig=0;
        while(n){
            dig++;
            n/=10;
        }
        return dig%2==0;
    }
    int findNumbers(vector<int>& nums) {
        int x=0;
        for(auto it:nums){
            if(num_dig(it))
                x++;
        }
        return x;
    }
};