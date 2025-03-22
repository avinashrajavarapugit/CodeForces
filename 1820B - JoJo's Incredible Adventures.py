for _ in range(int(input())):
    s = input()
    n = len(s)
    s = s + s
    f = 1
    mx = 0
    c = 0
    for ch in s:
        if ch == '1':
            c += 1
        else:
            f = 0
            c = 0
        mx = max(mx, c)
    
    if f:
        print(n * n)
    
    else:
        r = (mx - 1) // 2
        res = (mx - r) * (r + 1)
        print(res)
