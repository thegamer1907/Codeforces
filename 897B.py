def gen(k,p1):
    p = 1
    ans = 0
    while k:
        x = str(p)
        pal = x + x[::-1]
        pal = int(pal)
        #print type(pal)
        ans = ((ans%p1) + (pal%p1))%p1
        k-=1
        p+=1
    return ans




k,p = map(int,raw_input().split())

ans = gen(k,p)

print ans