class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        vector<pair<int,int>>p;
        for(int i=0;i<n;i++)
            p.push_back(make_pair(numbers[i], i));
        
        int i=0,j=n-1;
        while(i<j)
        {
            if(p[i].first+p[j].first>target)
                j--;
            else if(p[i].first+p[j].first<target)
                i++;
            else
                break;       
        }
        return {p[i].second+1,p[j].second+1};
    }
};