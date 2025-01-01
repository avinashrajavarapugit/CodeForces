n = int(input())
arr = list(map(int, input().split()))
m = float('inf')
for u in arr:
    m = min(m, abs(u))
    if m == 0:
        break
print(m)