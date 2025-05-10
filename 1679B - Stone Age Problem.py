n, q = map(int, input().split())
a = list(map(int, input().split()))
changed = {}
total = sum(a)
base = None

for _ in range(q):
    cmd = list(map(int, input().split()))
    if cmd[0] == 1:
        i, x = cmd[1] - 1, cmd[2]
        if base is not None:
            prev = changed.get(i, base)
        else:
            prev = changed.get(i, a[i])
        total += x - prev
        changed[i] = x
    else:
        x = cmd[1]
        total = x * n
        base = x
        changed.clear()
    print(total)
