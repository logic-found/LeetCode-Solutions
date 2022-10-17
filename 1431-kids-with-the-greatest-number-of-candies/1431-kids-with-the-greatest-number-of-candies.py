class Solution:
    def kidsWithCandies(self, candies: List[int], extra: int) -> List[bool]:
        m=0
        l=[]
        for i in candies:
            m=max(m,i)
        for i in candies:
            if(i+extra>=m):
                l.append(True)
            else:
                l.append(False)
        return l