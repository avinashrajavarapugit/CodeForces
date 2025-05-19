'''
s - must be palindrome
choose x and erase sime
min no of ersased to make s palindroe
'''
for _ in range(int(input())):
    n = int(input())
    s = input()
    if s == s[::-1]:
        print(0)
        continue
    res = float('inf')
    seen = set()
    for ch in s:
        if ch not in seen:
            seen.add(ch)
            k = s.replace(ch, '')
            if k == k[::-1]:
                cnt = 0
                l = 0
                r = len(s) - 1
                while l < r:
                    if s[l] == ch and s[r] != ch:
                        cnt += 1
                        l += 1
                    elif s[l] != ch and s[r] == ch:
                        cnt += 1
                        r -= 1
                    else:
                        l += 1
                        r -= 1
                res = min(res, cnt)
    print(res if res != float('inf') else -1)
            
