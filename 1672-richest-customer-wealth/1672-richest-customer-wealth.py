class Solution:
    def maximumWealth(self, accounts: List[List[int]]) -> int:
        ans=0
        for i in accounts:
            sum=0
            for j in i:
                sum+=j
            ans=max(ans,sum)
        return ans