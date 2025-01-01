for _ in range(int(input())):
    grid = []
    res = 0
    for _ in range(10):
        grid.append(input())
    for i in range(10):
        for j in range(10):
            if grid[i][j] == '.':
                continue
            xr = i if (i < 10 - 1 - i) else (10 - 1 - i)
            xc = j if (j < 10 - 1 - j) else (10 - 1 - j)
            ans = 1 + min(xr, xc)
            res += ans
    print(res)
