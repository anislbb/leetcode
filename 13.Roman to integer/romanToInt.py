class Solution(object):
    def romanToInt(self, s):
        symbol = {
            'I': 1,
            'V': 5,
            'X': 10,
            'L': 50,
            'C': 100,
            'D': 500,
            'M': 1000
        }
        result = 0
        for i in range(len(s)-1, -1, -1):
            curr = s[i]
            next_char = s[i+1] if i+1 < len(s) else None
            if next_char and symbol[curr] < symbol[next_char]:
                result -= symbol[curr]
            else:
                result += symbol[curr]
        return result
