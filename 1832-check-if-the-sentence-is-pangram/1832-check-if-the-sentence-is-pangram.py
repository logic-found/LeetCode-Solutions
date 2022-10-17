class Solution:
    def checkIfPangram(self, s: str) -> bool:
        dict={}
        for i in s:
            dict.update({i:1})
            
        if(len(dict)==26):
            return True
        return False
    
