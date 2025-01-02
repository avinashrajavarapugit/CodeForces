for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    b = []
    c = []
    k = max(a)
    for u in a:
        if u >= k:
            b.append(u)
        else:
            c.append(u)
    
    if len(c) > 0:
        print(len(c), len(b))
        print(*c)
        print(*b)
    else:
        print('-1')