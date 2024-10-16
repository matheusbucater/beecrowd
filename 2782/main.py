from itertools import groupby
from operator import itemgetter

def uniq_seq(iterable):
    return list(map(itemgetter(0), groupby(iterable)))

n = int(input())
if n <= 2:
    print(1)
    exit()
x = list(map(lambda a: int(a), input().split(" ")))
p = []
for i in range(n-1):
    p.append(x[i+1] - x[i])
print(len(uniq_seq(p)))
