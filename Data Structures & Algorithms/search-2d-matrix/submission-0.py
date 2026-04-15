class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        L, R = 0, len(matrix)-1
        l, r = 0, len(matrix[0]) -1
        inValid = False
        #counter MATRIX ROW
        while L <= R:
            MID = (L+R)//2
            if matrix[MID][0] <= target and matrix[MID][-1] >= target:
                array = matrix[MID] 
                while l <= r:

                    mid = (l+r)//2
                    print(array[mid])
                    if array[mid] == target:
                        # print("COMPLETED")
                        return True 
                    elif array[mid] > target:
                        r = mid - 1
                    else:
                        l = mid + 1
                # print("NOT FOUND")
                return False
            elif matrix[MID][0] > target:
                R = MID - 1
            elif matrix[MID][-1] < target:
                L = MID + 1
        # print("IN COL")
        return False