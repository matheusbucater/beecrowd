n = int(input())
x = []
for i in range(n):
    xn = int(input())
    x.append(xn)

xu = sorted(list(set(x)))
for i in range(len(xu)):
    xun = xu[i]
    c = x.count(xun)
    print(f'{xun} aparece {c} vez(es)')
