for _ in range(int(input())):
    n = int(input())
    s = input()
    res = 0
    seen = set()
    for i in range(n):
        seen.add(s[i])
        res += len(seen)
    print(res)
