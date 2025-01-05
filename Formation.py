
import sys
import bisect
input = sys.stdin.read
data = input().split()

idx = 0
t = int(data[idx])
idx += 1

results = []

for _ in range(t):
    n, q = int(data[idx]), int(data[idx + 1])
    idx += 2

    a = list(map(int, data[idx:idx + n]))
    idx += n

    queries = list(map(int, data[idx:idx + q]))
    idx += q

    LG = 30
    events = []

    for i in range(n):
        power = 1
        total = 0
        last_op = 0
        
        for j in range(LG):
            if i - j < 0:
                break

            total += a[i - j]

            L = last_op
            if i - j == 0:
                R = int(2e18)
            else:
                x = (power * 4 - 2) * a[i - j - 1] - total
                R = x
                last_op = x

            power *= 2
            events.append((L, -1, j, total))
            events.append((R, 1, j, total))

    for i, x in enumerate(queries):
        events.append((x, 0, i, 0))

    events.sort()
    
    ans = [0] * q
    st = [set() for _ in range(LG)]

    for event in events:
        h, op, j, total = event

        if op == -1:
            st[j].add(total)
        elif op == 1:
            st[j].remove(total)
        else:
            low, high = 0, int(2e9) + 1

            while high - low > 1:
                mid = (low + high) // 2
                cur = mid
                pos = 0
                valid = False

                for cnt in range(LG):
                    if not st[cnt]:
                        continue

                    neg = max(st[cnt])
                    pos += cur
                    cur = (cur + 1) // 2

                    if pos - neg <= h:
                        valid = True
                        break

                if valid:
                    low = mid
                else:
                    high = mid

            ans[j] = low

    results.extend(ans)

sys.stdout.write(" ".join(map(str, results)) + "\n")

