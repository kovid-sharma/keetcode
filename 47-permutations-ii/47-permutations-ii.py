#using python3#

class Solution:
    def permuteUnique(self, nums: List[int]) -> List[List[int]]:
        res=[]
        temp=[]
        count={n:0 for n in nums}
        for n in nums:
            count[n]+=1
        def dfs():
            if len(temp)==len(nums):
                res.append(temp.copy())
                return
            
            for nu in count:
                if count[nu]>0:
                    temp.append(nu)
                    count[nu]-=1
                    
                    dfs()
                    
                    
                    count[nu]+=1
                    temp.pop()
                    
        dfs()
        return res