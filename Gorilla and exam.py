import collections
t = int(input())
for _ in range(t):
    n, k = map(int, input().split())
    a = list(map(int, input().split()))
    freq = collections.Counter(a)
    uniq = len(freq)
    if k >= uniq and n==k:
        print(1)
    else:
        freq_sorted = sorted(freq.values())
        for count in freq_sorted:
            if k >= count:
                k -= count
                uniq -= 1
            else:
                break
        print(uniq)
