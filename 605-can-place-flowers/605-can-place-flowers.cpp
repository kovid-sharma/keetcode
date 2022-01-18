class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int x) {
        int cnt=0;
        flowerbed.push_back(0);
        vector<int>sample;
        sample.push_back(0);
        for(int i=0;i<flowerbed.size();i++)
            sample.push_back(flowerbed[i]);
        for(int i=1;i<sample.size()-1;i++)
        {
           if(sample[i-1]==0 and sample[i]==0 and sample[i+1]==0)
           {
               cnt++;
               i++;//skipper
           }
        }
        return cnt>=x;
    }
};