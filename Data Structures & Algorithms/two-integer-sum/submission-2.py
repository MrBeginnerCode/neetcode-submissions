class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hashmap = {}
        for i,v in enumerate(nums):
            remains = target - v

            if remains in hashmap:
                return [hashmap[remains],i]
            else:
                hashmap[v] = i 
                continue
        return []