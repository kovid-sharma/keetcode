class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long sum=accumulate(chalk.begin(),chalk.end(),0l);
        long left= k%sum;
        int i=0;
        while(left>0)
        {
            left-=chalk[i];
            if(left<0)
                return i;
            i++;
            
        }return i;
    }
};