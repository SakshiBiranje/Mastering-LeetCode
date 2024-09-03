public class SumOfdigitsOfString {
    public static int sumOfDigits(String num) {
        int sum = 0;
        for (char c : num.toCharArray()) {
            sum += c - '0';
        }
        return sum;
    }

    public static int getLucky(String s, int k) {
        StringBuilder num = new StringBuilder();
        for (char c : s.toCharArray()) {
            num.append(c - 'a' + 1);
        }

        while (k-- > 0) {
            num = new StringBuilder(Integer.toString(sumOfDigits(num.toString())));
        }

        return Integer.parseInt(num.toString());
    }

    public static void main(String[] args) {
        String s = "zbax";
        int k = 2;
        System.out.println(getLucky(s, k));  // Output: 8
    }
}