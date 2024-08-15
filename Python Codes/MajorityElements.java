import java.util.Scanner;

class Solution {

    public int majorityElement(int[] nums) {
        int cnt = 0, m = 0;
        for (int x : nums) {
            if (cnt == 0) {
                m = x;
                cnt = 1;
            } else {
                cnt += m == x ? 1 : -1;
            }
        }
        return m;
    }
}
public class MajorityElements{
    public static void main(String[] args) {
        Solution solution = new Solution();
        
        int[] nums = {1,2,3,4,1,6,7,1,8,1,1};
        
        int result = solution.majorityElement(nums);
        
        System.out.println("The majority element is: " + result);
    }
}

