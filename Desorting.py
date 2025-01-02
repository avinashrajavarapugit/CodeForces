import math
for _ in range(int(input())):
    n = int(input())
    arr = list(map(int, input().split()))
    f = True
    m = float('inf')
    pref = arr[0]
    for i in range(1, n):
        if pref <= arr[i]:
            m = min(m, 1 + (arr[i] - pref) //2)
        else:
            f = False
        pref = arr[i]
    print(m if f else 0)