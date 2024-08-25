class Solution:
    def romanToInt(self, s: str) -> int:
        nums = {
            'I': 1,
            'V': 5,
            'X': 10,
            'L': 50,
            'C': 100,
            'D': 500,
            'M': 1000
        }
        ans = nums[s[-1]]
        for i in range(len(s) - 1):
            sign = -1 if nums[s[i]] < nums[s[i + 1]] else 1
            ans += sign * nums[s[i]]
        return ans

solution = Solution()
s = "MCMXCIV"
print("Roman to Integer:", solution.romanToInt(s))
