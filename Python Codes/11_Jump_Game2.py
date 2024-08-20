class Solution(object):
    def jump(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        pos = 0
        ans = 0
        bound = len(nums)
        while pos < len(nums) - 1:
            dis = nums[pos]
            farthest = posToFarthest = 0
            for i in range(pos + 1, min(pos + dis + 1, bound)):
                canReach = i + nums[i]
                if i == len(nums) - 1:
                    return ans + 1
                if canReach > farthest:
                    farthest = canReach
                    posToFarthest = i
            ans += 1
            pos = posToFarthest
        return ans

if __name__ == "__main__":
    sol = Solution()
    
    # Example Test Cases
    nums1 = [2, 3, 1, 1, 4]
    print("Minimum jumps for nums1:", sol.jump(nums1))  # Output: 2

    nums2 = [2, 3, 0, 1, 4]
    print("Minimum jumps for nums2:", sol.jump(nums2))  # Output: 2

    nums3 = [1, 2]
    print("Minimum jumps for nums3:", sol.jump(nums3))  # Output: 1

    nums4 = [0]  # Special case with only one element
    print("Minimum jumps for nums4:", sol.jump(nums4))  # Output: 0
