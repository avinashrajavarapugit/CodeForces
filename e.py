import sys

MOD = 10**9 + 7

def floor_root(n, m):
    if m == 1:
        return n
    low = 0
    high = n
    res = 0
    while low <= high:
        mid = (low + high) // 2
        power = 1
        overflow = False
        for _ in range(m):
            power *= mid
            if power > n:
                overflow = True
                break
        if overflow:
            high = mid - 1
        else:
            if power <= n:
                res = mid
                low = mid + 1
            else:
                high = mid - 1
    return res

def main():
    input = sys.stdin.read().split()
    idx = 0
    t = int(input[idx])
    idx += 1
    for _ in range(t):
        n = int(input[idx])
        k = int(input[idx + 1])
        idx += 2
        
        sum_part1 = 0
        sum_part2 = 0
        min_p = min(k, n)
        
        if k > n:
            delta = (k - n) % MOD
            sum_part2 = (delta * (n % MOD)) % MOD
        
        max_m = 1
        while True:
            if 2 ** max_m > n:
                break
            max_m += 1
        max_m -= 1
        
        if max_m >= 2:
            for m in range(2, max_m + 1):
                low_p = floor_root(n, m) + 1
                high_p = floor_root(n, m - 1)
                low_p = max(2, low_p)
                high_p = min(min_p, high_p)
                
                if low_p > high_p:
                    continue
                
                if m == 2:
                    for p in range(low_p, high_p + 1):
                        q, r = divmod(n, p)
                        rev = q + r * p
                        sum_part1 = (sum_part1 + rev) % MOD
                else:
                    for p in range(low_p, high_p + 1):
                        rev = 0
                        for i in range(m):
                            divisor = p ** i
                            if divisor == 0:
                                digit = 0
                            else:
                                digit = (n // divisor) % p
                            exponent = m - 1 - i
                            term = digit * (p ** exponent)
                            rev += term
                        sum_part1 = (sum_part1 + rev) % MOD
        
        total = (sum_part1 + sum_part2) % MOD
        print(total)

if __name__ == "__main__":
    main()
