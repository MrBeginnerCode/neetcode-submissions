class Solution:
    def maxArea(self, heights: List[int]) -> int:
        res = 0
        l = 0
        r = 0
        for i in range(len(heights)):
            value = min((heights[l],heights[len(heights)- r - 1]))*(len(heights)-1-l-r)
            
            if (len(heights)-r-1 > l) :
                res = max(res,value)
               
            
            
                if min(heights[l],heights[len(heights)-r-1]) == heights[l]:
                    l += 1
                elif min(heights[l],heights[len(heights)-r-1]) == heights[len(heights)-r-1]:
                    r += 1
                elif heights[l] == heights[len(heights)-r-1]:
                    l += 1
                
        
        return res
            
            
            
                
