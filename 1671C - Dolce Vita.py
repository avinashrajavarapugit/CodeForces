for _ in range(int(input())):
    n, x = map(int, input().split())
    a = list(map(int, input().split()))
    '''
    is lcm possible?
    nope
    
    '''
    a.sort()
    s = 0
    res = 0
    for i, num in enumerate(a):
        s += num
        if s <= x:
            res += (x - s)//(i + 1) + 1
    print(res)
            
