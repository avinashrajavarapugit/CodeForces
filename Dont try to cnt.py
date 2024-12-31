for _ in range(int(input())):
    n, m = map(int, input().split())
    a = input()
    b = input()
    cnt = -1
    f = False
    while len(a) <= 100:
        cnt += 1
        for i in range(len(a) - len(b) + 1):
            if a[i:i + len(b)] == b:
                print(cnt)
                f = True
                break
        if f:
            break
        a += a
    if not f:
        print(-1)
