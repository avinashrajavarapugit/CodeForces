for _ in range(int(input())):
    n, s = map(int, input().split())
    a = list(map(int, input().split()))
    mp = {}
    res = -1
    prefSum = 0

    for i in range(len(a)):
        prefSum += a[i]
        if prefSum == s:
            res = i + 1
        elif (prefSum - s) in mp:
            res = max(res, i - mp[prefSum - s])

        if prefSum not in mp:
            mp[prefSum] = i
    print(n - res if res != -1 else -1)
