class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        dictionary = {}
        buckets = [[] for i in range(len(nums) + 1)]
        for num in nums:
            if num in dictionary.keys():
                dictionary[num] += 1
            else:
                dictionary[num] = 1
        for num, count in dictionary.items():
            buckets[count].append(num)
            
        result = []
        for i in range(len(buckets) - 1, 0, -1):
            for n in buckets[i]:
                result.append(n)
                if len(result) == k:
                    return result

        