class Solution:
    def removeDuplicates(self, nums):
        
        if not nums:
            return 0

        k = 1

        for i in range(1, len(nums)):
            if nums[i] != nums[k - 1]:
                nums[k] = nums[i]
                k += 1
        return k

if __name__ == "__main__":
    nums = list(map(int, input("Enter numbers separated by spaces: ").split()))

    solution = Solution()

    k = solution.removeDuplicates(nums)

    print(f"Output: {k}, nums = {nums[:k]}")