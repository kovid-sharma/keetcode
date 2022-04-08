class KthLargest {
public:
    multiset<int,greater<int>>ml;
    int ks;
    KthLargest(int k, vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
            ml.insert(nums[i]);
        ks=k;
    }
    
    int add(int val) {
        ml.insert(val);
        int sz=ks-1;
        auto itr=ml.begin();
        while(sz--)
        {
            itr++;
        }
        return *itr;
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */