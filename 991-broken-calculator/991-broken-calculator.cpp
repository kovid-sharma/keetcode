class Solution {
public:
    int brokenCalc(int startValue, int target) {
        int cnt=0;
        while(target<startValue){
            cnt++;
            target++;
        }
        while(target>startValue){
            if(target%2==1){
                target++;
                cnt++;
                continue;
            }
            target/=2;
            cnt++;
        }
        while(target<startValue){
            target++;
            cnt++;
        }
        return cnt;
    }
};