s = input()
s = s.split(' ')
r = []

for i in range(len(s)):
    p = s[i]
    sl1 = p[:2]
    sl2 = p[2:4]
    if sl1 != sl2:
        r.append(p)
    else:
        r.append(p[2:])

r = " ".join(r)
print(r)
