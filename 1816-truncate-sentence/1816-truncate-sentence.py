class Solution:
    def truncateSentence(self, s: str, k: int) -> str:
        i=0
        temp=0
        n=len(s)
        while(i<n):
            if(s[i]==' '):
                temp+=1;
            if(temp==k):
                break
            i+=1
                
        return s[0:i]