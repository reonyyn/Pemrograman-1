n = int(input())
b = list(map(int , input().split()))

i = 0
while i < n:
    jumlah = b[i] * (i+1)
    print(jumlah, end=" ")
    i +=1