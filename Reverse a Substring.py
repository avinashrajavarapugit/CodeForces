n = int(input())
s = input()
l = 0
r = 0
f = False
for i in range(1, n):
    if ord(s[i]) < ord(s[i - 1]):
        f = True
        l = i
        r = i + 1
        break
if f:
    print('YES')
    print(l, r)
else:
    print('NO')
    
