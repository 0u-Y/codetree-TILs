a,b = map(int,input().split())



if(a > b):
    m = a//b
    n = a%b
    print(str(m) + "..." + str(n))
    exit()
else:
    m = b//a
    n = b%a
    print(str(n) + "..." + str(m))
    exit()