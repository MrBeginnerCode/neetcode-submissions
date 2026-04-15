class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        Set_nums = set(nums)
        if len(Set_nums) == len(nums):
            return False
        else:
            return True