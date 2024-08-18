class Solution:
    def reverseString(self, s):
        left = 0
        right = len(s) - 1

        while left < right:
            s[left], s[right] = s[right], s[left]
            left += 1
            right -= 1

if __name__ == "__main__":
    solution = Solution()
    s = ['S', 'A', 'K', 'S', 'H', 'I']
    solution.reverseString(s)
    
    print(''.join(s))
