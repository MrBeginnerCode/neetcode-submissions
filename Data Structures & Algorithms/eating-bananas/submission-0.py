class Solution:
    def minEatingSpeed(self, piles: List[int], h: int) -> int:
        l,r = 1, max(piles)
        
        res = max(piles)
        def valid(k):
            d = 0
            for pile in piles:
                if pile < k:
                    d += 1
                elif pile%k != 0:

                    d += ((pile//k)+1)
                else:
                    d += (pile//k)
                print(d)
            if d <= h:
                return True
            else:
                return False
        
        while l<=r:
            mid = (l+r)//2
            print("mid",mid)
            if valid(mid):
                r = mid - 1
                res = min(res,mid)
            else:
                l = mid + 1
                
        return res
                