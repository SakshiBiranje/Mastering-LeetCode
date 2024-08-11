package JAVA;

import java.util.*;

public class MergeSortedArray {

    public static void merge(int[] nums1, int m, int[] nums2, int n) {
        int i = m - 1;
        int j = n - 1;
        int k = m + n - 1;

        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[k--] = nums1[i--];
            } else {
                nums1[k--] = nums2[j--];
            }
        }

        while (j >= 0) {
            nums1[k--] = nums2[j--];
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Input sizes
        System.out.print("Enter the size of nums1: ");
        int nums1Size = scanner.nextInt();
        System.out.print("Enter the size of nums2: ");
        int nums2Size = scanner.nextInt();

        int[] nums1 = new int[nums1Size];
        int[] nums2 = new int[nums2Size];

        System.out.print("Enter the number of elements in nums1 (excluding zeroes): ");
        int m = scanner.nextInt();
        System.out.println("Enter the elements of nums1: ");
        for (int i = 0; i < m; i++) {
            nums1[i] = scanner.nextInt();
        }
        for (int i = m; i < nums1Size; i++) {
            nums1[i] = 0;
        }

        System.out.print("Enter the number of elements in nums2: ");
        int n = scanner.nextInt();
        System.out.println("Enter the elements of nums2: ");
        for (int i = 0; i < n; i++) {
            nums2[i] = scanner.nextInt();
        }

        merge(nums1, m, nums2, n);

        System.out.print("Merged array: ");
        for (int num : nums1) {
            System.out.print(num + " ");
        }
        System.out.println();

        scanner.close();
    }
}
