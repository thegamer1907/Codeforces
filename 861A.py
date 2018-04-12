n,k = map(int,raw_input().split())
n1 =n
five =0
while(n1%5==0):
    n1/=5
    five+=1
    
n1 =n
two =0
while(n1%2==0):
    n1/=2
    two+=1
    
if five>=k and two>=k:
    print n
else:
    mfive = k-five
    mtwo = k-two
    if mfive>0:
        n*=(5**mfive)
    if mtwo>0:
        n*=(2**mtwo)

    print n