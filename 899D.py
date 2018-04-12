import sys

def main():
    n = input()
    dign = len(str(n))
    ni = ''
    for i in range(dign):
        ni+='9'
    flag = 1
    n1 = str(n)
    for i in range(len(n1)):
        if n1[i] != '9':
            flag = 0
            break
    if(flag):
        print n/2
        return
    fd = ni[:-1:]
    ni = int(ni)
    if (ni-n) < n:
        ans = ((2*n) - ni + 1)/2
        print ans
        return
    if n <= 4:
        print (n*(n-1))/2
        return 
    dign-=1
    it = []
    if len(fd):
        it.append(int(fd))

    for i in range(8):
        ni = str(i+1)
        for i in range(dign):
            ni+='9'
        it.append(int(ni))
    ans = 0
    #print it
    for e in it:
        if e >= (2*n):
            break
        elif e <= n :
            ans += ((e-1)/2)
        else:
            ans+= ((2*n) - e + 1)/2
    print ans
    return

if __name__ == "__main__":
    main()