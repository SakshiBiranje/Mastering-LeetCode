def sum_of_digits(num):
    return sum(int(digit) for digit in num)

def get_lucky(s, k):
    num = ''.join(str(ord(c) - ord('a') + 1) for c in s)
    
    for _ in range(k):
        num = str(sum_of_digits(num))
        
    return int(num)

# Example Usage
s = "zbax"
k = 2
print(get_lucky(s, k))  # Output: 8