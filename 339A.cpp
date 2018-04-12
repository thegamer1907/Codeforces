s = map(int,raw_input().split('+'))
s.sort()

temp = ''
for i in range(len(s)):
    if i == len(s)-1:
        temp+=str(s[i])
    else:
       temp+= str(s[i]) + '+'

print temp