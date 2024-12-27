a, b = map(int, input().split())
if (a != b):
    print("Jumlah tidak sama")
    exit(1)
list_a = list(map(int, input().split()))
list_b = list(map(int, input().split()))

i = 0
while i < a:
    jumlah = list_a[i] * list_b[i]
    print(jumlah, end=" ")
    i+=1