class Solution:
    def isPalindrome(self, s: str) -> bool:
        cleansed_str = (''.join(ch for ch in s if ch.isalnum())).lower()
        for i in range(0, floor(len(cleansed_str) / 2)):
            if cleansed_str[i] != cleansed_str[-1 * i - 1]:
                return False
        return True
        