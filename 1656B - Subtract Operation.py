for _ in range(int(input())):
    n, k = map(int, input().split())
    a = list(map(int, input().split()))
    s = set(a)
    '''
    remove x from a
    subract x from a
    last element is k -> YES
    '''
    f = False
    for i in range(n):
        if (k + a[i]) in s:
            f = True
            break
        
    if f:
        print('YES')
    else:
        print('NO')
