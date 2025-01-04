
def verify_xor_sum(a, b, c):
    """Helper function to calculate XOR sum for verification"""
    return (a ^ b) + (b ^ c) + (c ^ a)
# Process multiple test cases
def solve():
    t = int(input())
    for _ in range(t):
        l, r = map(int, input().split())
        diff_bit = r ^ l
        highest_bit = 1
        while highest_bit <= diff_bit:
            highest_bit <<= 1
        highest_bit >>= 1
        
        # Candidates around the critical bit boundary
        base = r & ~(highest_bit- 1)
        if base + 2 <= r:
            a, b, c = base, base + 1, base + 2
        elif base + 1 <= r:
            a, b, c = base - 1, base, base + 1
        else:
            a, b, c = r - 2, r - 1, r
        print(a, b, c)
        print('xor sum:' + str(verify_xor_sum(a, b, c)))

if __name__ == "__main__":
    solve()


print('originals:')
print(verify_xor_sum(1, 2, 0))
print(verify_xor_sum(8, 7, 1))
print(verify_xor_sum(2, 1, 3))
print(verify_xor_sum(7, 6, 11))
print(verify_xor_sum(134, 132, 137))