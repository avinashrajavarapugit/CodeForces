for _ in range(int(input())):
    n, k = map(int, input().split())
    arr = list(map(int, input().split()))
    print('YES' if k in arr else 'NO')