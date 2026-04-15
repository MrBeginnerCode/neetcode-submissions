class Solution:

    def encode(self, strs: List[str]) -> str:
        s = ""
        # for i,v in enumerate(strs):
        #     s += f"{len(strs[i])}"
        for i,v in enumerate(strs):
            s += f"{strs[i]}/"
        # s = s[1:]
        # s += f"{len(strs)}"
        return s # contain digit-number
    def decode(self, s: str) -> List[str]:
        l = ""
        final = []
        i = 0
        # print(len(strs))
        
        
        for digit in range(len(s)):
            if (s[(digit)] != "/"):
                l += s[digit]
                # print(l)
            else:
                i += 1
                final.append(l)
                l = ""
            

        
        return final
