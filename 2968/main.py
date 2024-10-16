x, y = input("").split()
x = int(x)
y = int(y)
a=''
str(a)
for i in range(1,10):
    if(((x*y*i)%10)==0):
        a=a+str(int((x*y)*i/10))+" "
    else:
        a=a+str(int(((x*y)*i/10)+1))+" "
    i+1
a=a[:-1]
print(a)
