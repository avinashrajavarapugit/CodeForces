for _ in range(int(input())):
    n = int(input())
    c = list(map(int, input().split()))
    
    c.sort()
    ans = (c[0] == 1)
    s = 1
    for j in range(1, n):
        if s < c[j]:
            ans = False
        else:
            s += c[j]
    
    if ans:
        print('YES')
    else:
        print('NO')
