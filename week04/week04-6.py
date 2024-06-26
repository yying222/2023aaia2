class Solution:
    def pivotInteger(self, n: int) -> int:
        total = 0
        for i in range(1, n + 1):
            total = total + i

        left = 0
        for i in range(1, n + 1):
            left = left + i
            if left + left - i == total:
                return i
        return -1