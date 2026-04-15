class Solution:
    def findMin(self, nums: List[int]) -> int:
        l, r = 0, len(nums)-1
        containTrue = False
        while l < r:
            mid = (l+r)//2
            # print(nums[mid], "helo", l, r)
            if nums[mid] <= nums[-1]:
                r = mid 
            elif nums[mid] > nums[-1]:
                l = mid + 1
        return nums[r]