class Solution {
public:
    bool isRobotBounded(string instructions) {
        int n= instructions.size();
        //trying to make soln different from reference lee125 as this is kind of standard procedure
        //will change the rotation direction as N W S E instead of N E S W
        int x_idx=0,y_idx=0;
        int idx_cng[4][2]={{0,1/*N*/},{-1,0/*W*/},{0,-1/*S*/},{1,0/*E*/}};//the change in index for a diretion
        int dir=0;//North in start
        for(int i=0;i<n;i++)
        {
            if(instructions[i]=='L')
            {
                dir=(dir+1)%4;
            }
            else if(instructions[i]=='R')
            {
                dir=(dir+3)%4;//1right being eqaul to 3 left rotations
            }
            else
            {
                x_idx+=idx_cng[dir][0];y_idx+=idx_cng[dir][1];
            }
                
        }
        if(x_idx==0 and y_idx==0)
            return true; //loop in itself and face north
        if(dir!=0)
            return true; //not a loop in one string but will become a loop when the robor repeats its instructions
        return false;
    }
};
