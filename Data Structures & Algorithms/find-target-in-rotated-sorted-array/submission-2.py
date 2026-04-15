class Solution:
    def search(self, nums: List[int], target: int) -> int:
        l, r = 0, len(nums) - 1
        while l < r:
            mid = (l+r)//2
            print(l,r ,"->", nums[mid])
           
            
            
                
             
            if target <= nums[-1]: #SEARCH in true
                if nums[mid] <= nums[-1]: # this is true
                    if nums[mid] > target:
                        r = mid - 1
                    elif nums[mid] < target:
                        l = mid + 1
                    else:
                    
                        return mid
                else: #this is not true
                    l = mid + 1
            else: #SEARCH in false
                if nums[mid] <= nums[-1]: # 1 2 3
                    r = mid - 1
                else:
                    if nums[mid] > target:
                        r = mid - 1
                    elif nums[mid] < target:
                        l = mid + 1
                    else:
                        return mid
        print(l,r)
        if l == r and nums[l] == target:
            print("HERE IS", l,r)
            return r
        elif l == r and nums[l] != target or l == -1 or r == -1:
            return -1
        