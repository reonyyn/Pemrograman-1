a, b = map(int, input().split())
Bilangan = list(map(int, input().split()))
i = 0
while i < a * b:
    if i % b == 0 and i > 0:
        print()
    print(Bilangan[i], end=" ")
    i+=1