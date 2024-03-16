class Solution(object):
    def twoSum(self, nums, target):
        temp = copy.deepcopy(nums)
        temp.sort()
        start = 0
        end = len(temp) - 1
        while (start < end):
            total = temp[start] + temp[end]
            if total > target:
                end -= 1
            elif total < target:
                start += 1
            else:
                first = nums.index(temp[start])
                second = nums.index(temp[end])
                if (first == second):
                    second = nums.index(temp[end], first + 1)
                return [first, second]
        return []
