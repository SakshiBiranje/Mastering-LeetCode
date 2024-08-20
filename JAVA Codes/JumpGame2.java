public class JumpGame2 {
    public int jump(int[] nums) {
        if (nums.length == 0) {
            return 0;
        }
        
        int ans = 0;  // To count the number of jumps
        int mx = 0;   // To keep track of the maximum index we can reach at the current level
        int last = 0; // To keep track of the last index we reached with the previous jump
        
        for (int i = 0; i < nums.length - 1; ++i) {
            mx = Math.max(mx, i + nums[i]);
            if (last == i) {
                ++ans;   // Increment the jump count
                last = mx; // Update the last reachable index
            }
        }
        
        return ans;
    }

    public static void main(String[] args) {
        JumpGame2 sol = new JumpGame2();
        
        // Example Test Cases
        int[] nums1 = {2, 3, 1, 1, 4};
        System.out.println("Minimum jumps for nums1: " + sol.jump(nums1)); // Output: 2

        int[] nums2 = {2, 3, 0, 1, 4};
        System.out.println("Minimum jumps for nums2: " + sol.jump(nums2)); // Output: 2

        int[] nums3 = {1, 2};
        System.out.println("Minimum jumps for nums3: " + sol.jump(nums3)); // Output: 1

        int[] nums4 = {0};
        System.out.println("Minimum jumps for nums4: " + sol.jump(nums4)); // Output: 0
    }
}
