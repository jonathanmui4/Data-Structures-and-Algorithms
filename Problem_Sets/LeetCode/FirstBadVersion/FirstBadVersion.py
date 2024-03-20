# The isBadVersion API is already defined for you.
# def isBadVersion(version: int) -> bool:

class Solution:
    def firstBadVersion(self, n: int) -> int:
        first, last, min = 1, n, 0
        while first <= last:
            mid = first + (last - first) // 2
            isBad = isBadVersion(mid)
            if isBad:
                min = mid
                last = mid - 1
            else:
                first = mid + 1
        return min
        