t = input()

s = raw_input()

ans = ''
cnt =0
for i in range(len(s)):
    if s[i] == '1':
        cnt+=1
    else:
        if cnt>0:
            ans+=str(cnt)
            cnt=0
        elif s[i-1] == '0':
            ans+='0'

if cnt>0:
    ans+=str(cnt)
elif s[len(s)-1] == '0':
    ans+='0'

print ans