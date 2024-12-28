import collections
for _ in range(int(input())):
    n = int(input())
    b = list(map(int, input().split()))
    c = collections.Counter(b)
    cnt = len(c)
    if cnt > 2:
        print('NO')
    else:
        if cnt == 1:
            print('YES')
        else:
            keys = sorted(c.values())
            if abs(keys[0] - keys[1]) <= 1:
                print('YES')
            else:
                print('NO')