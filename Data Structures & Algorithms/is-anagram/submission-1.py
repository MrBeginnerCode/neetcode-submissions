class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        hashmapS = dict()
        hashmapT = dict()

        for char in s:
            if char not in hashmapS:
                hashmapS[char] = 0
            else: 
                hashmapS[char] += 1

        for char in t:
            if char not in hashmapT:
                hashmapT[char] = 0
            else: 
                hashmapT[char] += 1

        if hashmapT == hashmapS:
            return True
        else:
            return False