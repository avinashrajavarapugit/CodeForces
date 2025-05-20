'''
ai x aj = i + j

'''
for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    res = 0
    for i in range(n):
        for j in range(a[i] - i - 1, n + 1, a[i]):
            if j <= i + 1:
                continue
            if a[i] * a[j - 1] == i + j + 1:
                res += 1
    print(res)
