class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        charSet = []
        default = []
        l = 0
        if len(s1) > len(s2):
            return False
        
        for i in range(len(s1)):
            charSet.append(s2[i]) #lec
            # print(i,charSet)
        
        for j in range(len(s1)):
            
            default.append(s1[j]) #lec
            # print(j,default)
        
        for r in range(len(s1)-1,len(s2),1): #first r = 2
            print('In progress',charSet, default)
            a = sorted(default)
            b = sorted(charSet)
            # print(charSet,default)
            if a != b and r + 1 < len(s2):
                # print(l,r)
                # print(s2[l],"SAP BI REMOVE!!")
                charSet.pop(0)
                l += 1
                r += 1
                charSet.append(s2[r])
                # print(s2[r], "duoc add them vo")
                # print('finished',charSet)
            elif a != b and r + 1 >= len(s2):
                return False
            else:
                return True
        
        
