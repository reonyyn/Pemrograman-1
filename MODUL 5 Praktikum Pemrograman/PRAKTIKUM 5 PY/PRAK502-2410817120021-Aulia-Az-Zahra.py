def hitung(nilai1, nilai2):
    #Lengkapi Function ini
    return abs(nilai1 - nilai2)

def mutlak(angka):
    #Lengkapi Function ini
    return abs(angka)

a,c,b,d = map(int, input().split())
Hasil = hitung(a, b)+hitung(c,d)
print(mutlak(Hasil))