class Solution:
    def mostWordsFound(self, sentences: List[str]) -> int:
        ans=0
        
        for i in sentences:
            words=1
            for j in i:
                if(j==' '):
                    words+=1
            ans=max(ans,words)
            
        return ans