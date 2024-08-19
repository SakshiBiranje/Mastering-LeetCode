import java.util.Scanner;

public class JumpGame 
{

    public boolean canJump(int[] nums) 
    {
        int maxReach = 0;
        int n = nums.length;
        
        for (int i = 0; i < n; i++) 
        {
            if (i > maxReach) return false;
            maxReach = Math.max(maxReach, i + nums[i]);
        }
        
        return maxReach >= n - 1;
    }

    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the size of the array: ");
        int n = scanner.nextInt();
        int[] nums = new int[n];

        System.out.println("Enter the elements of the array: ");
        for (int i = 0; i < n; i++) 
        {
            nums[i] = scanner.nextInt();
        }

        JumpGame solution = new JumpGame();
        boolean result = solution.canJump(nums);
        System.out.println(result ? "true" : "false");
    }
}