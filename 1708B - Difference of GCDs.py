for _ in range(int(input())):
    n, l, r = map(int, input().split())
    a = []
    possible = True
    for p in range(1, n + 1):
        x = ((l - 1) // p + 1) * p
        if x > r:
            possible = False
        a.append(x)
    if possible:
        print("YES")
        print(*a)
    else:
        print("NO")
