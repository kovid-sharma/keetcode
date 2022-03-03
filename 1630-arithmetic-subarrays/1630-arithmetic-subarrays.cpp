class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        int m=l.size();
        vector<bool>ans(m,true);
        vector<int>tmp;
        for(int i=0;i<m;i++)
        {
            for(int x=l[i];x<=r[i];x++)
                tmp.push_back(nums[x]);
            sort(tmp.begin(),tmp.end());
            int dif=tmp[1]-tmp[0];
            for(int j=1;j<tmp.size()-1;j++)
                if(dif!=(tmp[j+1]-tmp[j])){
                    ans[i]=false;break;}
            tmp.clear();
        }return ans;
    }
};