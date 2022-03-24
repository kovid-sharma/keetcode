class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int cnt=people.size();
        int r=cnt-1;
        int l=0;
        while(l<r)
        {
            int now=people[l]+people[r];
            if(now<=limit){
                r--;l++;cnt--;
            }
            else{
                r--;
            }
        }
        return cnt;
    }
};