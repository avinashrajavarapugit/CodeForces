for _ in range(int(input())):
    n = int(input())
    s = input()
    res = 0
    cnt = 0
    for ch in s:
        if ch == ')':
            cnt -= 1
            if cnt < 0:
                cnt += 1
                res += 1
        else:
            cnt += 1
            
    print(res)
