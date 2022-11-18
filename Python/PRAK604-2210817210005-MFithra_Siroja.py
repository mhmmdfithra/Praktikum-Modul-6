a=0;b=0
asli = input()
palsu = input()
kode = len(asli)
pesan = len(palsu)
if kode == pesan :
    for i in range(kode):
        if(asli[i]==palsu[i]):
            if (asli[i] == ' '):
                print(" ", end ='')
            else:
                print("*", end ='')
                a += 1
        else :
            print("#",end='')
            b += 1
    print("\n* = ",a)
    print("# = ",b)
    if(a >= b):
        print("Pesan Asli")
    else: 
        print("Pesan Palsu")
else:
 print("panjang Kalimat Berbeda, Pesan Palsu")
