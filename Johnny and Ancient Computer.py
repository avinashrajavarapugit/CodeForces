for _ in range(int(input())):
    b, a = map(int, input().split())
    c = 0
    if a == b:
        print(0)
        continue
    
    if a > b:
        while a > b:
            if a % 8 == 0 and a // 8 >= b:
                a //= 8
                c += 1
            elif a % 4 == 0 and a // 4 >= b:
                a //= 4
                c += 1
            elif a % 2 == 0 and a // 2 >= b:
                a //= 2
                c += 1
            else:
                break
    else:
        while a < b:
            if a * 8 <= b:
                a *= 8
                c += 1
            elif a * 4 <= b:
                a *= 4
                c += 1
            elif a * 2 <= b:
                a *= 2
                c += 1
            else:
                break
    
    print(c if a == b else -1)
        
