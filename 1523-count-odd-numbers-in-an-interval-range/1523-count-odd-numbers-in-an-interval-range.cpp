class Solution {
public:
    int countOdds(int low, int high) {
        int l= low/2;
        int h= (high+1)/2;
        return h-l;
    }
};