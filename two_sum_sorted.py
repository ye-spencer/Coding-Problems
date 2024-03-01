class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        first = 0
        end = len(numbers) - 1
        while (first < end):
            som = numbers[first] + numbers[end] 
            if som < target:
                first += 1
            elif som > target:
                end -= 1
            else:
                return [(first + 1), (end + 1)]
        return []
            
        