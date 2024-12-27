n = int(input())
Matriks_A = []
Matriks_B = []
Matriks_C = []

print("Matriks A")
for i in range(n):
    baris = list(map(int, input().split()))
    Matriks_A.append(baris)

print("Matriks B")
for i in range(n):
    baris = list(map(int, input().split()))
    Matriks_B.append(baris)
for i in range(n):
    Matriks_C.append([0] * n)

for i in range(n):
    for j in range(n):
        for k in range(n):
            Matriks_C[i][j] += Matriks_A[i][k] * Matriks_B[k][j]


print("Matriks AXB")
for i in range(n):
    for j in range(n):
        print(Matriks_C[i][j], end=" ")
    print()