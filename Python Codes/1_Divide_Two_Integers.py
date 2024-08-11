def divide(dividend, divisor):
    if dividend == -2**31 and divisor == -1:
        return 2**31 - 1

    sign = -1 if (dividend > 0) != (divisor > 0) else 1

    abs_dividend = abs(dividend)
    abs_divisor = abs(divisor)

    quotient = 0

    while abs_dividend >= abs_divisor:
        temp_divisor = abs_divisor
        count = 1

        while abs_dividend >= (temp_divisor << 1):
            temp_divisor <<= 1
            count <<= 1

        abs_dividend -= temp_divisor
        quotient += count

    return sign * quotient

def main():
    dividend = int(input("Enter the dividend: "))
    divisor = int(input("Enter the divisor: "))

    result = divide(dividend, divisor)
    print("Result:", result)

if __name__ == "__main__":
    main()
