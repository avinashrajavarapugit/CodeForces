for _ in range(int(input())):
    n = int(input())
    w = list(map(int, input().split()))
    pref = [0] * n
    suff = [0] * n
    pref[0] = w[0]
    suff[-1] = w[-1]
    for i in range(1, n):
        pref[i] = pref[i - 1] + w[i]
    for i in range(n - 2, -1, -1):
        suff[i] = suff[i + 1] + w[i]
    res = 0
    l = 0
    r = n - 1
    while l < r:
        if pref[l] == suff[r]:
            res = max(res, l + 1 + (n - r))
            l += 1
            r -= 1
        elif pref[l] > suff[r]:
            r -= 1
        else:
            l += 1
    print(res)
