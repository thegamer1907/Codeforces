n,m = map(int,raw_input().split())

mat = []
p2 = [1]

for i in range(1,51):
    p2.append(p2[i-1]*2)

for i in range(n):
    mat.append(map(int,raw_input().split()))

ans = n*m

for i in range(n):
    n1 = 0
    n0 = 0
    for j in range(m):
        if mat[i][j] == 1:
            n1+=1
        else:
            n0+=1
    an1 = p2[n1]-1-n1
    an0 = p2[n0]-1-n0
    if an1 >0:
        ans+=an1
    if an0 > 0:
        ans+=an0

for i in range(m):
    n1 = 0
    n0 = 0
    for j in range(n):
        if mat[j][i] == 1:
            n1+=1
        else:
            n0+=1
    an1 = p2[n1]-1-n1
    an0 = p2[n0]-1-n0
    if an1 >0:
        ans+=an1
    if an0 > 0:
        ans+=an0
print ans