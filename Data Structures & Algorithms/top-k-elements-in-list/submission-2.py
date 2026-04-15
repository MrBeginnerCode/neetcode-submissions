class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        res = {}
        output = []
        for num in nums:
            if num in res:
                res[num] += 1
            else:
                res[num] = 0
        print(res)
        # [0,1,3,2,4] k = 2, 3 4, null = 0 max = 4, for in range(len)
        #result = dict(zip(res.values(), res.keys()))
        valuesets = sorted(list(res.values()))
        print(valuesets)
        for keys in res:
            if (res[keys] in valuesets[-k:]):
                output.append(keys)
                
                print(valuesets)
        return output
