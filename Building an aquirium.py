for _ in range(int(input())):
    n, x = map(int, input().split())
    a = list(map(int, input().split()))
    def solve(n, x, a):
        if n == 1:
            return a[0] + x
        L, R, res = 1, max(a) + x + 1, 1
        while L < R:
            h = (L + R) // 2
            k = 0
            for v in a:
                if v < h:
                    k += h - v
            if k <= x:
                res = h
                L = h + 1
            else:
                R = h
        return res
    print(solve(n, x, a))
