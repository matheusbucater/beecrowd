nm = input()
n = int(nm.split()[0])
m = int(nm.split()[1])
c = n

for i in range(m):
    s = input()
    if s == "fechou":
        c += 1
    else: 
        c -= 1

print(c)
