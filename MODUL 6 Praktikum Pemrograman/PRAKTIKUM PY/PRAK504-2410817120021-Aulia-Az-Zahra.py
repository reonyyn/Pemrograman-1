str1 = input()
str2 = input()
str3 = str1

if len(str1) != len(str2):
    print("Panjang kalimat berbeda, pesan palsu")
    exit(1)

i = 0
char_sama = 0
char_tidaksama = 0
while(i < len(str1)):
    if str1[i] == ' ' and str2[i] == ' ':
        str3 = str3[:i] +' '+str3[:i+1]
    else:
        if str1[i] == str2[i]:
            str3 = str3[:i] +'*'+str3[:i+1]
            char_sama+=1
        elif str1[i] != str2[i]:
            str3 = str3[:i] +'#'+str3[:i+1]
            char_tidaksama+=1
    print(str3[i],end="")
    i+=1
print()
print(f"* = {char_sama}")
print(f"# = {char_tidaksama}")
if char_sama >= char_tidaksama:
    print("Pesan Asli")
elif char_sama < char_tidaksama:
    print("Pesan Palsu")