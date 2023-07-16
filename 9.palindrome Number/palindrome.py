class Solution(object):
    def isPalindrome(self, x):
        original = x
        reverse = 0

        while x > 0:
            reverse = reverse * 10 + (x % 10)
            x = x // 10
        return original == reverse
