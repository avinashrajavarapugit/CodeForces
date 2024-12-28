for _ in range(int(input())):
    n = int(input())
    van = True
    moves = 0
    while True:
        k = n % 3
        if van:
            if (k == 1 or k == 2):
                print('First')
                break
            else:
                n += 1
            
        else:
            if k == 2:
                n += 1
            else:
                n -= 1
        moves += 1
        van = not van
        if moves > 10:
            print('Second')
            break
    
            

        
