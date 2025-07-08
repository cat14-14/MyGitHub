n,m,v = map(int, input().split())
g = [[] for _ in range(n + 1)]
for i in range(m):
    a,b = map(int, input().split())
    g[a].append(b)
    g[b].append(a)

s = []
