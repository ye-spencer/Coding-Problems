class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        longest = 0
        length = len(s)
        for i in range(length):
            nxt = 1
            while (nxt + i < length) and (s[i + nxt] not in s[i:(i+nxt)]):
                nxt += 1
            longest = max(longest, nxt)
        return longest




        