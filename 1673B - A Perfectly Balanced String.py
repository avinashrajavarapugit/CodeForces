import collections

for _ in range(int(input())):
    s = input()
    if not s:
        print("NO")
        continue
    cnt = 1
    ch = s[0]
    d = collections.defaultdict(int)
    f = 0
    d[ch] += 1

    for i in range(1, len(s)):
        if s[i] == ch:
            cnt += 1
        if i > 0 and s[i] == s[i - 1]:
            f = 1
        d[s[i]] += 1

    if cnt == len(s):
        print('YES')
    elif len(d) == 2:
        if f:
            print('NO')
        else:
            print('YES')
    else:
        t = ""
        y = ""
        x = len(d)
        for i in range(x):
            t += s[i]
        for i in range(1, len(t)):
            if t[i] == t[i - 1]:
                f = 1
        if f:
            print("NO")
        else:
            for i in range(0, len(s), x):
                y += t
            y = y[:len(s)]
            print("YES" if y == s else "NO")
