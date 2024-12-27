n, m =map(int, input().split())
i = n
j = m
print()
while i < m and j > n:
    print(f"{i} {j} -", end=" ")
    i += 1
    j -=1
    if i == m and j == n:
        print(f"{i} {j}", end=" ")

while i > m and j < n:
    print(f"{i} {j} -", end=" ")
    i -= 1
    j += 1
    if i == m and j == n:
        print(f"{i} {j}", end=" ")