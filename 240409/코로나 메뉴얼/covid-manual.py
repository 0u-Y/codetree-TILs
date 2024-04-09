cnt = 0;


for _ in range(3):
    a,b = input().split()
    c = int(b)

    if(a == 'Y' and c >= 37):
        cnt+=1;


if(cnt >= 2):
    print("E")
else:
    print("N")