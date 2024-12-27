def reverse(n):
    #Lengkapi Function ini
    reversed = 0
    while n != 0:
        remainder = n % 10
        reversed = reversed * 10 + remainder
        n //= 10
    return reversed

A, B = map(int, input().split())
A = reverse(A)
B = reverse(B)
C = A + B
print(reverse(C))