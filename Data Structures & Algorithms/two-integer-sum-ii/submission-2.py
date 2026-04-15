class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        left = 0
        right = 0
        for i in range(len(numbers)):
            if numbers[0+left] + numbers[-1-right] > target:
                right += 1
            elif numbers[0+left] + numbers[-1-right] < target: 
                left += 1
            else:
                return [left+1,len(numbers)-right]
