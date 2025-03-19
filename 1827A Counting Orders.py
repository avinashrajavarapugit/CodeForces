from bisect import bisect_right
MOD = 10**9 + 7
for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    
    a.sort()
    b.sort()
    ans, pre, d, res = 1, 0, 0, 0

    for i in range(n - 1, -1, -1):
        idx = bisect_right(a, b[i])
        if idx < len(a):
            d = len(a) - idx
        else:
            ans = 0
            break

        if i < n - 1:
            res = (d - pre) + res - 1
            ans = (ans * (res % MOD)) % MOD
        else:
            ans = d
            res = d

        pre = d

    print(ans % MOD)

    
