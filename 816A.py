pal = [0,
70,
140,
210,
280,
350,
601,
671,
741,
811,
881,
951,
1202,
1272,
1342,
1412]

n = raw_input()

mi = int(n[0:2])*60 + int(n[3:])

if(mi>1412):
    print (1440-mi)
else:
    for m in pal:
        if m >= mi:
            if m == mi:
                print '0'
            else:
                print(m-mi)
            break