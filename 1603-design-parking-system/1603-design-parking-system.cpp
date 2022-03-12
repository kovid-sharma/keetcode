class ParkingSystem {
public:
    vector<int>nums;
    ParkingSystem(int big, int medium, int small) {
        nums.push_back(0);
        nums.push_back(big);
        nums.push_back(medium);
        nums.push_back(small);
    }
    
    bool addCar(int carType) {
        if(nums[carType]>0){
            nums[carType]--;return true;
        }
            nums[carType]--;
        
        return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */