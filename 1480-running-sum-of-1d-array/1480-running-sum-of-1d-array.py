class Solution:
    def runningSum(self, nums: List[int]) -> List[int]:
        sum=0
        l=[]
        for i in nums:
            sum+=i
            l.append(sum)
        return l