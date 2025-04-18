from math import lcm, gcd
for _ in range(int(input())):
    n, x, y = map(int, input().split())
    
    if gcd(x, y) == 1:
        c = n // (x * y)
    else:
        c = n // lcm(x, y)
    
    a = (n // x) - c
    b = (n // y) - c
    b = b * (b + 1) // 2
    
    if a > 0:
        a = (n + n - a + 1) * a // 2
        print(a - b)
    else:
        a = abs(a)
        a = a * (a + 1) // 2
        print(-a - b)
