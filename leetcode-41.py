class Solution:
    def firstMissingPositive(self, nums: List[int]) -> int:
        length = len(nums)
        missingValue = {}
        for i in nums:
            if i>0:
                missingValue[i]=i;

        if len(missingValue) == 1:
            if 1 in missingValue.values():
                return 2;
            return 1;
        for i in range(1,length+1):
            if (i not in missingValue):
                return i

        return len(missingValue)+1
