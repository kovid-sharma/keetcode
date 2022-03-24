class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int cnt=people.size();
        sort(people.begin(),people.end());
        int l=0;
        int r=cnt-1;
        while(l<r)
        {
            if((people[r]+people[l])>limit)
                r--;
            else if((people[r]+people[l])<=limit)
            {
                l++;
                r--;
                cnt--;
            }
        }
        return cnt;
    }
};