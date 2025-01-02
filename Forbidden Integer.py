for _ in range(int(input())):
    n, k, x = map(int, input().split())
    if x != 1:
        print('YES')
        print(n)
        a = [1] * n
        print(*a)
    elif k >= 2 and n %2 == 0:
        print('YES')
        print(n//2)
        a = [2]* (n//2)
        print(*a)
    elif k >= 3:
        print('YES')
        print(n//2)
        a = [3] + [2] * (n//2 - 1)
        print(*a)
    else:
        print('NO')