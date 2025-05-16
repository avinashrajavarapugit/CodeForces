for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    if a[n - 2] <= a[n - 1] and a[n - 1] >= 0:
        print(n - 2)
        for i in range(n - 2):
            print(i + 1, n - 1, n)
    elif a == sorted(a):
        print(0)
    else:
        print(-1)
