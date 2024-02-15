class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        nums.sort()
        length = len(nums)
        ans = []
        for i in range(length):
            if (nums[i] > 0):
                 break
            if (i > 0 and nums[i] == nums[i - 1]):
                continue
            front = i + 1
            back = length - 1
            total = 0
            while (front < back):
                total = nums[i] + nums[front] + nums[back]
                if (total > 0):
                    back -= 1
                elif (total < 0):
                    front += 1
                else:
                    ans.append([nums[i], nums[front], nums[back]])
                    l_front = nums[front]
                    l_back = nums[back]
                    while (front < back and nums[front] == l_front):
                        front += 1
                    while (front < back and nums[back] == l_back):
                        back -= 1
        return ans
        
