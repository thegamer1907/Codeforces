lin = []

while True:
    try:
        s = raw_input().strip()
        lin.append(s)
    except EOFError:
        break

llen = []

for e in lin:
    llen.append(len(e))

mlen = max(llen)

space = " "*mlen

print "*" + "*"*mlen + "*"

left = 1
for i in lin:
    x = mlen - len(i)
    if x!=0:
        if x%2==0:
            v = (x/2)
        else:
            v = (x/2) + 1
        x1 = x-v
        if x1!=v:
            if left == 0:
                print "*" + " "*v + i + " "*x1 + "*"
                left = 1
            else:
                print "*" + " "*x1 + i + " "*v + "*"
                left = 0
        else:
            print "*" + " "*v + i + " "*x1 + "*"
    else:
        print "*" + i + "*"
    
print "*" + "*"*mlen + "*"