while True:
    print("\nPilih program\n1. Penjumlahan\n2. Pengurangan\n3. Perkalian\n4. Pembagian\n5. Exit")
    n = int(input("Masukkan Pilihan : "))

    if n < 1 or n > 5:
        print("Input anda salah, silahkan coba lagi") 
        continue
    elif n == 5:
        print("Terimakasih, telah menggunakan kalkulator AULIA AZ ZAHRA")
        break
    
    a = float(input("Masukkan nilai pertama : "))
    b = float(input("Masukkan nilai kedua : "))

    if n == 1:
        Hasil = a + b
        print(f"Hasil penjumlahan antara {a:.2f} dengan {b:.2f} adalah {Hasil:.2f}")
    elif n == 2:
        Hasil = a - b
        print(f"Hasil pengurangan antara {a:.2f} dengan {b:.2f} adalah {Hasil:.2f}")
    elif n == 3:
        Hasil = a * b
        print(f"Hasil perkalian antara {a:.2f} dengan {b:.2f} adalah {Hasil:.2f}")
    elif n == 4:
        Hasil = a / b
        print(f"Hasil pembagian antara {a:.2f} dengan {b:.2f} adalah {Hasil:.2f}")