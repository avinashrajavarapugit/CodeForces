for i in range(int(input())):
    n = (int(input()))
    print(((((n * (n + 1) * (2 * n + 1)) // 6) + (((n * (n + 1) * (n - 1)) // 3)))* 2022) % (1000000007))
