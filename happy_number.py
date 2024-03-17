class Solution:
    def alter(self, n):
        total = 0
        while n >= 1:
            total += (n % 10) ** 2
            n = floor(n / 10)
        return total

    def isHappy(self, n: int) -> bool:
        my_dict = {}
        while (n != 1):
            if n in my_dict.keys():
                return False
            my_dict[n] = True
            n = self.alter(n)
        return True

            
        