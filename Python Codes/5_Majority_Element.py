class Solution(object):
    def majorityElement(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        cnt = m = 0

        for x in nums:
            if cnt == 0:
                m, cnt = x, 1
            else:
                cnt += 1 if m == x else -1

        return m


if __name__ == "__main__":
    solution = Solution()
    
    nums = [3,2,3,1,4,5,3,7,3]
    
    result = solution.majorityElement(nums)
    
    print(f"The majority element is: {result}")
