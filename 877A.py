chk =["Danil", "Olya", "Slava", "Ann","Nikita"]

s = raw_input()

cnt = []
for l in chk:
    cnt.append(s.count(l))

su = sum(cnt)

if su==1:
    print 'YES'
else:
    print 'NO'