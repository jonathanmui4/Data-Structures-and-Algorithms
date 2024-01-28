class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        dict = {value: key for key, value in enumerate(nums)}
        for i, num in enumerate(nums):
            complement = target - num
            if complement in dict and dict[complement] != i:
                return [dict[complement], i]

        return []