for _ in range(int(input())):    
    a, b, c = map(int, input().split())

    Anna = False
    s = a + b + c
    if (a + (c % 2) > b):
        Anna = True
    print('First' if Anna else 'Second')
