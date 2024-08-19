def can_jump(nums):
    mx = 0
    for i in range(len(nums)):
        if mx < i:
            return False
        mx = max(mx, i + nums[i])
    return True

if __name__ == "__main__":
    nums = [2, 3, 1, 1, 4] 
    if can_jump(nums):
        print("You can reach the end of the array!\n true")
    else:
        print("You cannot reach the end of the array.\n false")
