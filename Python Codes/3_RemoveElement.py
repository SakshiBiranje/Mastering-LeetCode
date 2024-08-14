class Solution:
    def removeElement(self, nums, val):
        k = 0
        
        for i in range(len(nums)):
            if nums[i] != val:
                nums[k] = nums[i]
                k += 1
                
        return k

if __name__ == "__main__":
    n = int(input("Enter the number of elements: "))
    
    nums = []
    print("Enter the elements: ")
    for i in range(n):
        nums.append(int(input()))
    
    val = int(input("Enter the value to remove: "))
    
    solution = Solution()
    newLength = solution.removeElement(nums, val)
    
    print("Array after removal: ", end="")
    for i in range(newLength):
        print(nums[i], end=" ")
    print()
    
    print("New length:", newLength)
