def merge(nums1, m, nums2, n):
    i = m - 1
    j = n - 1
    k = m + n - 1

    while i >= 0 and j >= 0:
        if nums1[i] > nums2[j]:
            nums1[k] = nums1[i]
            i -= 1
        else:
            nums1[k] = nums2[j]
            j -= 1
        k -= 1

    while j >= 0:
        nums1[k] = nums2[j]
        j -= 1
        k -= 1

def main():
    # Input sizes
    nums1Size = int(input("Enter the size of nums1: "))
    nums2Size = int(input("Enter the size of nums2: "))

    nums1 = [0] * nums1Size
    nums2 = [0] * nums2Size

    m = int(input("Enter the number of elements in nums1 (excluding zeroes): "))
    print("Enter the elements of nums1: ")
    for i in range(m):
        nums1[i] = int(input())

    for i in range(m, nums1Size):
        nums1[i] = 0

    n = int(input("Enter the number of elements in nums2: "))
    print("Enter the elements of nums2: ")
    for i in range(n):
        nums2[i] = int(input())

    merge(nums1, m, nums2, n)

    print("Merged array: ", end="")
    for num in nums1:
        print(num, end=" ")
    print()

if __name__ == "__main__":
    main()
