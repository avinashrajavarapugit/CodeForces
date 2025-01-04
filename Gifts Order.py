class Node:
    def __init__(self, v=0):
        self.c = 1
        self.mv = 0
        self.mp = self.ms = v + 1
        self.mpx = self.msx = v - 1

    @staticmethod
    def merge(l, r):
        n = Node()
        n.c = l.c + r.c
        n.mp = min(l.mp, l.c + r.mp)
        n.mpx = max(l.mpx, r.mpx - l.c)
        n.ms = min(r.ms, r.c + l.ms)
        n.msx = max(r.msx, l.msx - r.c)
        n.mv = max(l.mv, r.mv, -l.ms + r.mpx + 1, l.msx - r.mp + 1)
        return n


class SegmentTree:
    def __init__(self, n):
        self.t = [Node() for _ in range(4 * n)]
        self.n = n

    def _upd(self, i, v, x, s, e):
        if s == e:
            self.t[x] = Node(v)
            return
        m = (s + e) // 2
        if i <= m:
            self._upd(i, v, 2 * x + 1, s, m)
        else:
            self._upd(i, v, 2 * x + 2, m + 1, e)
        self.t[x] = Node.merge(self.t[2 * x + 1], self.t[2 * x + 2])

    def upd(self, i, v):
        self._upd(i, v, 0, 0, self.n - 1)

    def get_max(self):
        return self.t[0].mv


for _ in range(int(input())):
    n, q = map(int, input().split())
    st = SegmentTree(n)
    for i, v in enumerate(map(int, input().split())):
        st.upd(i, v)
    print(st.get_max())
    for _ in range(q):
        i, v = map(int, input().split())
        st.upd(i - 1, v)
        print(st.get_max())
