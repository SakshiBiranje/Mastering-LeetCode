package JAVA;

import java.util.Scanner;

public class DivideTwoIntegers {

    public int divide(int dividend, int divisor) {
        if (dividend == Integer.MIN_VALUE && divisor == -1) {
            return Integer.MAX_VALUE;
        }

        int sign = ((dividend > 0) == (divisor > 0)) ? 1 : -1;

        long absDividend = Math.abs((long) dividend);
        long absDivisor = Math.abs((long) divisor);

        int quotient = 0;

        while (absDividend >= absDivisor) {
            long tempDivisor = absDivisor;
            int count = 1;

            while (absDividend >= (tempDivisor << 1)) {
                tempDivisor <<= 1;
                count <<= 1;
            }

            absDividend -= tempDivisor;
            quotient += count;
        }

        return sign * quotient;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the dividend: ");
        int dividend = scanner.nextInt();

        System.out.print("Enter the divisor: ");
        int divisor = scanner.nextInt();

        DivideTwoIntegers solution = new DivideTwoIntegers();

        int result = solution.divide(dividend, divisor);
        System.out.println("Result: " + result);

        scanner.close();
    }
}
