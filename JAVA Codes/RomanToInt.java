import java.util.HashMap;

class RomanToInt
{
    public int romanToInt(String s) 
    {
        HashMap<Character, Integer> nums = new HashMap<>();
        nums.put('I', 1);
        nums.put('V', 5);
        nums.put('X', 10);
        nums.put('L', 50);
        nums.put('C', 100);
        nums.put('D', 500);
        nums.put('M', 1000);

        int ans = nums.get(s.charAt(s.length() - 1));
        for (int i = 0; i < s.length() - 1; ++i)
        {
            int sign = nums.get(s.charAt(i)) < nums.get(s.charAt(i + 1)) ? -1 : 1;
            ans += sign * nums.get(s.charAt(i));
        }
        return ans;
    }

    public static void main(String[] args) 
    {
        RomanToInt solution = new RomanToInt();
        String s = "MCMXCIV";
        System.out.println("Roman to Integer: " + solution.romanToInt(s));
    }
}
