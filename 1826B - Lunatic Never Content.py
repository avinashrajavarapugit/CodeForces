for _ in range(int(input())):
    import math
    n = int(input())
    a = list(map(int, input().split()))
    '''
    3 0 1 2 0 3 2 1
    '''
    res = 0
    for i in range(n):
        res = math.gcd(res, abs(a[i] - a[n - 1 - i]))
    print(res)
