num = int(input())

for p in range(num):
    print(' '*(num-p-1)+'* '*(p+1))

for rp in range(num-1, 0, -1):
    print(' '*(num-rp)+'* '*rp)
