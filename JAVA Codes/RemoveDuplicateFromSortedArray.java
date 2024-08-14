import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

class Solution {
    public int removeDuplicates(int[] nums) {
        if (nums.length == 0) {
            return 0;
        }

        int k = 1;

        for (int i = 1; i < nums.length; i++) {
            if (nums[i] != nums[k - 1]) {
                nums[k] = nums[i];
                k++;
            }
        }

        return k;
    }
}

public class RemoveDuplicateFromSortedArray {
    public static void main(String[] args) {
        Solution solution = new Solution();
        List<Integer> numsList = new ArrayList<>();
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter numbers separated by spaces: ");
        String input = scanner.nextLine();
        scanner.close();

        for (String s : input.split(" ")) {
            numsList.add(Integer.parseInt(s));
        }

        int[] nums = numsList.stream().mapToInt(i -> i).toArray();

        int k = solution.removeDuplicates(nums);

        System.out.print("Output: " + k + ", nums = [");
        for (int i = 0; i < k; i++) {
            System.out.print(nums[i]);
            if (i < k - 1) {
                System.out.print(", ");
            }
        }
        System.out.println("]");
    }
}