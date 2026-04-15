class Solution:
    def isPalindrome(self, s: str) -> bool:
        s2 = ''.join([char for char in s if char.isalnum()])
        s2 = s2.lower()
        for i in range(len(s2)):
            if s2[i] == s2[-1-i]:
                continue
            else:
                return False
        return True